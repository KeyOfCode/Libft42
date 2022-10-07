/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:27 by darismen          #+#    #+#             */
/*   Updated: 2022/10/07 17:32:28 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*priv_lstnew(void *content)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (!(newlist))
		return (NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}

void	priv_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	priv_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		priv_lstdelone(*lst, del);
		*lst = current->next;
	}
	*lst = NULL;
}

void	priv_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;
	t_list	*current;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current)
		current = current->next;
	last_elem = current;
	last_elem->next = new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist = priv_lstnew(f(lst->content));
	newnode = newlist;
	lst = lst->next;
	while (lst)
	{
		newlist->next = priv_lstnew(f(lst->content));
		if (!newlist->next)
		{
			priv_lstclear(&newlist, del);
			return (NULL);
		}
		priv_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}

/* Parámetros 
	lst: un puntero a un nodo.
	f: la dirección de un puntero a una función usada
		en la iteración de cada elemento de la lista.
	del: un puntero a función utilizado para eliminar
		el contenido de un nodo, si es necesario.
Valor devuelto 
	La nueva lista.
	NULL si falla la reserva de memoria.
Funciones autorizadas
	malloc, free
Descripción 
	Itera la lista ’lst’ y aplica la función ’f’ al
	contenido de cada nodo. Crea una lista resultante
	de la aplicación correcta y sucesiva de la función
	’f’ sobre cada nodo. La función ’del’ se utiliza
	para eliminar el contenido de un nodo, si hace
	falta. */