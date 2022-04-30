/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:17:18 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/30 11:19:57 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int a;

	printf("ft:\t%d\n",
			// ft_printf("%%%%%%x %x %X %d %s %c %u %p\n", 10, 10, 17, (char *)NULL, 's', -1, &a));
			ft_printf("%d%d%d", 0, 10, 0));
	printf("or:\t%d\n",
			// printf("%%%%%%x %x %X %d %s %c %u %p\n", 10, 10, 17, (char *)NULL, 's', -1, &a));
			printf("%d%d%d", 0, 10, 0));
	return (0);
}
