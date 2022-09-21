/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:50:54 by darismen          #+#    #+#             */
/*   Updated: 2022/09/21 12:25:36 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*start;

	start = str;
	i = ft_strlen(str);
	str = (str + i);
	while (*str != *start && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
