/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:50:54 by darismen          #+#    #+#             */
/*   Updated: 2022/09/28 13:07:49 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_priv_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*start;

	c = (unsigned char)c;
	start = str;
	i = ft_priv_strlen(str);
	str = (str + i);
	while (*str != *start && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
