/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:19:18 by darismen          #+#    #+#             */
/*   Updated: 2022/09/21 14:39:43 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	h;		//contador str
	size_t	n;		//contador sub

	h = 0;
	if (sub[0] == '\0')
		return ((char *)str);	//si el sub es vacio, devuelve str.
	while (str[h] != '\0')
	{
		n = 0;
		while (str[h + n] == sub[n] && (h + n) < len)
			//mientras coincidan los caracteres de str y sub y no se
			//han contado más de len caracteres.
		{
			if (str[h + n] == '\0' && sub[n] == '\0') //si str y sub coinciden hasta el final
				return ((char *)&str[h]); //devuelve el caracter donde empieza el substring.
			n++;
		}
		if (sub[n] == '\0')	//si se leyó todo el substring, pero no es el final del string.
			return ((char *)str + h); //devuelve str + size_t?
		h++;
	}
	return (0);
}

/* size_t	h;
	size_t	n;

	h = 0;
	if (sub[0] == '\0')
		return ((char *)str);
	while (str[h] != '\0')
	{
		n = 0;
		while (str[h + n] == sub[n] && (h + n) < len)
		{
			if (str[h + n] == '\0' && sub[n] == '\0')
				return ((char *)&str[h]);
			n++;
		}
		if (sub[n] == '\0')
			return ((char *)str + h);
		h++;
	}
	return (0); */