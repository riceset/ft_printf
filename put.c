/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 06:22:06 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/30 02:26:07 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				g_len;

// static t_bool	valid_base(char *base, int base_digits)
// {
// 	int	i;
// 	int	j;

// 	i = -1;
// 	while (base[++i])
// 		if (base_digits == 0 || base_digits == 1 || base[i] == '+'
// 			|| base[i] == '-' || !(' ' < base[i] && base[i] <= '~'))
// 			return (FALSE);
// 	i = -1;
// 	while (++i < base_digits - 1)
// 	{
// 		j = i;
// 		while (++j < base_digits)
// 			if (base[j] == base[i])
// 				return (FALSE);
// 	}
// 	return (TRUE);
// }

// extern void	ft_putnbr_base(long long nbr, char *base)
// {
// 	int	base_digits;

// 	base_digits = ft_strlen(base);
// 	if (valid_base(base, base_digits))
// 	{
// 		if (nbr < 0)
// 		{
// 			ft_putchar('-');
// 			nbr *= -1;
// 		}
// 		if (nbr < base_digits)
// 			ft_putchar(base[nbr]);
// 		else
// 		{
// 			ft_putnbr_base(nbr / base_digits, base);
// 			ft_putnbr_base(nbr % base_digits, base);
// 		}
// 	}
// }

t_bool	check_characters(char *base, int base_digits)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < base_digits - 1)
	{
		j = i + 1;
		while (j < base_digits)
		{
			if (base[j] == base[i])
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_bool	check_valid_base(char *base, int base_digits)
{
	int		i;

	i = 0;
	if (base_digits == 0 || base_digits == 1)
		return (FALSE);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (FALSE);
		else if (!(base[i] > ' ' && base[i] <= '~'))
			return (FALSE);
		i++;
	}
	if (check_characters(base, base_digits))
		return (TRUE);
	return (FALSE);
}

void	ft_putnbr_base(long long nbr, char *base)
{
	int			valid_base;
	int			base_digits;
	long long	long_nbr;

	base_digits = ft_strlen(base);
	valid_base = check_valid_base(base, base_digits);
	if (!valid_base)
		return ;
	long_nbr = (long long) nbr;
	if (long_nbr < 0)
	{
		ft_putchar('-');
		long_nbr *= -1;
	}
	if (long_nbr < base_digits)
		ft_putchar(base[long_nbr]);
	else
	{
		ft_putnbr_base(long_nbr / base_digits, base);
		ft_putnbr_base(long_nbr % base_digits, base);
	}
}

extern void	ft_putstr(char *s)
{
	size_t	len;

	if (s)
	{
		len = ft_strlen(s);
		while (len > INT_MAX)
		{
			write(1, s, INT_MAX);
			s += INT_MAX;
			len -= INT_MAX;
			g_len += INT_MAX;
		}
		write(1, s, len);
		g_len += len;
	}
}

extern void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_len++;
}
