/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:19:31 by darismen          #+#    #+#             */
/*   Updated: 2022/09/25 16:41:52 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		tot_len;
	int		i;
	char	*newstr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	tot_len = len1 + len2;
	newstr = (char *)malloc(tot_len);
	i = 0;
	while (i < len1)
	{
		newstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (len1 + i < tot_len)
	{
		newstr[len1 + i] = s2[i];
		i++;
	}
	return (newstr);
}
