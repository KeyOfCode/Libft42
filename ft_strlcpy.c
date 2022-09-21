/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:46:22 by darismen          #+#    #+#             */
/*   Updated: 2022/09/21 10:46:32 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	srclen;

	srclen = 0;
	n = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (size == 0)
		return (srclen);
	while (n < size - 1 && src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	while (n < size)
	{
		dest[n] = '\0';
		n++;
	}
	return (srclen);
}
