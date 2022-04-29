/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 08:25:25 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/29 13:19:10 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playground.h"

ssize_t printed;

int	ft_printf(char *fmt, ...)
{
	va_list	ap;
	char	*str;
	ssize_t res;

	va_start(ap, fmt);
	for (char *trv = fmt; *trv; trv++)
	{
		if (*trv == '%')
		{
			if (*(trv + 1) == '%')
			{
				ft_putchar('%');
				trv++;
			}
			else if (*(trv + 1) == 'd')
			{
				ft_putnbr(va_arg(ap, int));
				trv++;
			}
			else if (*(trv + 1) == 'c')
			{
				ft_putchar(va_arg(ap, int));
				trv++;
			}
			else if (*(trv + 1) == 's')
			{
				str = va_arg(ap, char *);
				if (!str)
					ft_putstr("(null)");
				else
					ft_putstr(str);
				trv++;
			}
		}
		else
			ft_putchar(*trv);
	}
	va_end(ap);
	res = printed;
	printed = 0;
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	printed++;
}

void ft_putstr(char *s)
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
			printed += INT_MAX;
		}
		write(1, s, len);
		printed += len;
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
