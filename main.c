/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:17:18 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/30 02:07:18 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	// ft_printf("%x", 10);
	printf("ft:\t%d\n",
			ft_printf("%%%%%%x %x %X %d %s %c\n", 10, 10, 17, "SEVENTEEN", 's'));
	printf("or:\t%d\n",
			printf("%%%%%%x %x %X %d %s %c\n", 10, 10, 17, "SEVENTEEN", 's'));
	return (0);
}
