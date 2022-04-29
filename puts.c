/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:15:49 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/29 14:15:54 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playground.h"

int counter;

int	reset_counter(void)
{
	int	res;

	res = counter;
	counter = 0;
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	counter++;
}

void	ft_putstr(char *s)
{
	size_t	len;

	if (s)
	{
		len = strlen(s);
		while (len > INT_MAX)
		{
			write(1, s, INT_MAX);
			s += INT_MAX;
			len -= INT_MAX;
			counter += INT_MAX;
		}
		write(1, s, len);
		counter += len;
	}
}

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
