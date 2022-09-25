/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:56:37 by darismen          #+#    #+#             */
/*   Updated: 2022/09/25 16:41:46 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned int	n;
	void			*og_dest;

	og_dest = dest;
	if (!dest && !src)
		return ;
	n = 0;
	while (n < size - 1)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		n++;
	}
}

/*
** LIBRARY: <string.h>
** SYNOPSIS: copy memory area
**
** DESCRIPTION:
** 		The memcpy() function copies n bytes from memory area s2 to memory area
**	s1.  If s1 and s2 overlap, behavior is undefined.  Applications in which
**	s1 and s2 might overlap should use memmove(3) instead.
**
**RETURN VALUES
**     The memcpy() function returns the original value of dst.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return (dst);
}
*/

/* unsigned int	n;
	void			*og_dest;

	og_dest = dest;
	if (!dest && !src)
		return ;
	n = 0;
	while (n < size - 1)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		n++;
	}
	return (og_dest);
	 */