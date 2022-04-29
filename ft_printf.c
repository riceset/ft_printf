/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 08:25:25 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/29 14:16:23 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playground.h"

extern int		counter;

int	ft_printf(char *fmt, ...)
{
	va_list	ap;
	char	*str;

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
			else if (*(trv + 1) == 'd' || *(trv + 1) == 'i')
			{
				ft_putnbr(va_arg(ap, int));
				trv++;
			}
			else if (*(trv + 1) == 'x')
			{
				ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
				trv++;
			}
			else if (*(trv + 1) == 'X')
			{
				ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
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
	return (reset_counter());
}
