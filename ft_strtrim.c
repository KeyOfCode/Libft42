/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:36:25 by darismen          #+#    #+#             */
/*   Updated: 2022/09/25 19:50:53 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}

int	ft_trimfirst(char const *s1, char const *set, int len, int set_len)
{
	int		i;
	int		j;

	i = 0;
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (j < set_len)
		{
			if (s1[i] == set[j])
			{
				i++;
				j = 0;
			}	
			j++;
		}
		return (i);
	}
	return (i);
}

int	ft_trimlast(char const *s1, char const *set, int len, int set_len)
{
	int		i;
	int		j;

	i = len;
	while (i > 0)
	{
		j = 0;
		while (j < set_len)
		{
			if (s1[i] == set[j])
			{
				i--;
				j = 0;
			}	
			j++;
		}
		return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		set_len;
	int		start;
	int		end;
	char	*newstr;

	len = ft_strlen(s1);
	set_len = ft_strlen(set);
	newstr = (char *)malloc(len);
	start = ft_trimfirst(s1, set, len, set_len);
	end = ft_trimlast(s1, set, len, set_len);
	len = 0;
	while (start < end)
	{
		newstr[len] = s1[start];
		len++;
		start++;
	}
	return (newstr);
}
