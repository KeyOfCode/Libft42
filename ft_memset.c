/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:08:08 by darismen          #+#    #+#             */
/*   Updated: 2022/09/21 14:15:02 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned long	i;

	i = 0;
	c = (unsigned char)c;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (0);
}
