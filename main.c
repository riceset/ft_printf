/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:17:18 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/29 14:24:09 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playground.h"

int	main(void)
{
	int a = 3;
	printf("ft:\t%d\n",
			// ft_printf("%%%%%%x %X %d %s %c\n", 10, 10, 17, "SEVENTEEN", 's'));
			ft_printf("%%%%%x\n", 3));
	printf("or:\t%d\n",
			// printf("%%%%%%x %X %d %s %c\n", 10, 10, 17, "SEVENTEEN", 's'));
			printf("%%%%%p\n", &a));
	return (0);
}
