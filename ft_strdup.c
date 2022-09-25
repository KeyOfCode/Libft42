/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:02:49 by darismen          #+#    #+#             */
/*   Updated: 2022/09/22 12:11:49 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		len;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len);
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
