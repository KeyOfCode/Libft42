/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:41:05 by darismen          #+#    #+#             */
/*   Updated: 2022/09/21 11:37:54 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *str);
void			*memset(void *b, int c, unsigned long len);
void			bzero(void *s, unsigned long n);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_toupper(int str);
int				ft_tolower(int str);
char			*strchr(const char *s, int c);
char			*strrchr(const char *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);



int				ft_atoi(char *str);

#endif