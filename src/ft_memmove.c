/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:05:13 by darismen          #+#    #+#             */
/*   Updated: 2026/11/02 14:34:22 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***
* LIBRARY: <string.h>
* SYNOPSIS: copy byte string
*
* DESCRIPTION:
* 		The memmove() function copies n bytes from string s2 to string s1.  The
*	two strings may overlap; the copy is always done in a non-destructive
*	manner.
* RETURN VALUES:
	 	The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dest, const void *src, unsigned int len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest || !src || dest == src || !len)
		return (dest);
	d = dest;
	s = src;
	if (d < s || d >= s + len)
		while (len--)
			*d++ = *s++;
	else
	{
		while (len)
		{
			--len;
			d[len] = s[len];
		}
	}
	return (dest);
}
