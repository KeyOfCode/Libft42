/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:08:08 by darismen          #+#    #+#             */
/*   Updated: 2022/09/25 16:36:22 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned long	i;
	unsigned char	*prt;

	i = 0;
	prt = (unsigned char *)b;
	while (i < len)
	{
		prt[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
