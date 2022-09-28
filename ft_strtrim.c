/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:36:25 by darismen          #+#    #+#             */
/*   Updated: 2022/09/27 12:31:21 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_priv_strlen(const char *s)
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
	while (i < len)
	{
		j = 0;
		while (j < set_len)
		{
			if (s1[i] == set[j])
			{
				i++;
				j = 0;
			}
			else
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
			if (s1[i - 1] == set[j])
			{
				i--;
				j = 0;
			}
			else
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

	len = ft_priv_strlen(s1);
	set_len = ft_priv_strlen(set);
	newstr = (char *)malloc(len);
	if (!(newstr))
		return (NULL);
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

/* #include <stdlib.h>
#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
} */
/* int		main(void)
{
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	ft_print_result(ft_strtrim(s1, " "));
	write(1, "\n", 1);
	char s2[] = "lorem ipsum dolor sit amet";
	ft_print_result(ft_strtrim(s2, "te"));
	write(1, "\n", 1);
	char s3[] = " lorem ipsum dolor sit amet";
	ft_print_result(ft_strtrim(s3, "l "));
	write(1, "\n", 1);
	char s4[] = "lorem ipsum dolor sit amet";
	ft_print_result(ft_strtrim(s4, "tel"));
	write(1, "\n", 1);
	char s5[] = "          ";
	ft_print_result(ft_strtrim(s5, " "));
	write(1, "\n", 1);
} */

/* int		main(int argc, const char *argv[])
{
	char	*strtrim;
	int		arg;

	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		char s1[] = " lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "l ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "tel")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	return (0);
} */