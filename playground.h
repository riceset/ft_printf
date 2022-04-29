/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playground.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:19:07 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/29 14:09:26 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYGROUND_H
# define PLAYGROUND_H

typedef enum e_bool
{
	FALSE,
	TRUE
} t_bool;

# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

# include "colors.h"

void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int reset_counter(void);
void	ft_putnbr_base(int nbr, char *base);


extern int ft_printf(char *fmt, ... ) __attribute__ ((format(printf, 1, 2)));

#endif
