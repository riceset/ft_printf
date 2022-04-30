/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:19:07 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/30 02:14:07 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYGROUND_H
# define PLAYGROUND_H

typedef enum e_bool
{
	FALSE,
	TRUE
}		t_bool;

# include "colors.h"
# include <ctype.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		reset_len(void);
void	ft_putnbr_base(long long nbr, char *base);
size_t	ft_strlen(const char *s);
int		ft_printf(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

#endif
