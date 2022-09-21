/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:56:37 by darismen          #+#    #+#             */
/*   Updated: 2022/09/21 14:22:19 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *dest, const void *src, unsigned int size)
{
	unsigned int	n;
	void			*og_dest;

	og_dest = dest;
	if (!dest && !src)
		return ;
	n = 0;
	while (n < size)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		n++;
	}
	return ;
}

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy memory area
**
** DESCRIPTION:
** 		The memcpy() function copies n bytes from memory area s2 to memory area
**	s1.  If s1 and s2 overlap, behavior is undefined.  Applications in which
**	s1 and s2 might overlap should use memmove(3) instead.
*/

/* n = 0;
	og_dest = dest;
	while (n < size - 1 && src != '\0')
	{
		dest = src;
		n++;
		dest++;
		src++;
	}
	while (n < size)
	{
		dest = '\0';
		n++;
		dest++;
	}
	return (og_dest); */