/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:20:28 by darismen          #+#    #+#             */
/*   Updated: 2022/09/28 13:22:35 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	fd = (unsigned char *)fd;
	fd = c;
}

/* Parameters 
	c: The character to output.
	fd: The file descriptor on which to write.
	
Description 
	Outputs the character ’c’ to the given file descriptor. */