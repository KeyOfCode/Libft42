/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:34:13 by darismen          #+#    #+#             */
/*   Updated: 2022/09/22 12:01:19 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	b;

	b = 0;
	start = (size_t)start;
	subs = (char *)malloc(len);
	if (!(subs))
		return (NULL);
	while (s[start] == '\0' && b < len)
	{
		subs[b] = s[start];
		b++;
		start++;
	}
	return (subs);
}
