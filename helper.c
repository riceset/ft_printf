/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:15:49 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/30 01:46:02 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playground.h"

extern int		g_len;

extern int	reset_len(void)
{
	int	res;

	res = g_len;
	g_len = 0;
	return (res);
}

extern size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		p++;
	return ((size_t)(p - s));
}

