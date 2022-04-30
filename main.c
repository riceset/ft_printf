/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:17:18 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/30 02:41:51 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// TEST(2, print(" %x ", -1));
	ft_printf(" %x ", -1);
	// printf(" %x ", -1);
	// printf("ft:\t%d\n",
	// 		ft_printf("%%%%%%x %x %X %d %s %c\n", 10, 10, 17, "SEVENTEEN", 's'));
	// printf("or:\t%d\n",
	// 		printf("%%%%%%x %x %X %d %s %c\n", 10, 10, 17, "SEVENTEEN", 's'));
	return (0);
}
