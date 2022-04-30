/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 08:25:25 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/30 02:13:55 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

extern int	g_len;
static char	*str;

static void	put_fmt(va_list ap, const char **fmt)
{
	if (**fmt == '%')
		ft_putchar('%');
	else if (**fmt == 'd' || *(*fmt + 1) == 'i' || *(*fmt + 1) == 'u')
		ft_putnbr_base(va_arg(ap, int), "0123456789");
	else if (**fmt == 'x')
		ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	else if (**fmt == 'X')
		ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
	else if (**fmt == 'c')
		ft_putchar(va_arg(ap, int));
	else if (**fmt == 's')
	{
		str = va_arg(ap, char *);
		if (!str)
			ft_putstr("(null)");
		else
			ft_putstr(str);
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;

	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			put_fmt(ap, &fmt);
		}
		else
			ft_putchar(*fmt);
		fmt++;
	}
	va_end(ap);
	return (reset_len());
}
