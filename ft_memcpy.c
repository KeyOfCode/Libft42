/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:56:37 by darismen          #+#    #+#             */
/*   Updated: 2022/09/25 19:35:15 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned int	n;
	void			*og_dest;

	og_dest = dest;
	n = 0;
	while (n < size)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		n++;
	}
	return (og_dest);
}
/* 
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
		return (0);
	memset(mem, 'j', 30);
	if ((arg = atoi(argv[1])) == 1)
	{
		if (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
		write(1, "\n", 1);
		if (mem != memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	else if (arg == 2)
	{
		if (mem != ft_memcpy(mem, "zyxwvutst", 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
		write(1, "\n", 1);
		if (mem != memcpy(mem, "zyxwvutst", 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	else if (arg == 3)
	{
		if (mem != ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
		write(1, "\n", 1);
		if (mem != memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
			write(1, "\ndest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	return (0);
} */