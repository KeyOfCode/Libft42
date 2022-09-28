/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:09:48 by darismen          #+#    #+#             */
/*   Updated: 2022/09/28 13:01:29 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_int(int value)
{
	int	l;

	l =! value;
	while (value)
	{
		l++;
		value /= 10;
	}
	return (l);
}

char	*priv_store(char *nb, int n, int i, int len)
{
	while (len > i)
	{
		nb[len] = n % 10;
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		i;
	int		len;

	i = 0;
	len = len_int(n);
	nb = (char *)malloc(len);
	if (!(nb))
		return (0);
	if (n == -2147483648)
	{
		nb[0] = '-';
		nb[1] = '2';
		n = 147483648;
		i += 2;
	}
	if (n < 0)
	{
		nb[0] = '-';
		n = -n;
		i++;
	}
	nb = priv_store(nb, n, i, len);
	return (nb);
}
