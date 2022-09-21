/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:11:19 by darismen          #+#    #+#             */
/*   Updated: 2022/09/21 11:13:44 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(unsigned int count, unsigned int size)
{
	unsigned int	tot_size;
	void			*dst;

	tot_size = size * count;
	if (!(dst == malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
