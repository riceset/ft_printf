/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playground.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:19:07 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/29 13:16:24 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYGROUND_H
# define PLAYGROUND_H

# include <ctype.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);

extern int ft_printf(char *fmt, ... ) __attribute__ ((format(printf, 1, 2)));

#endif
