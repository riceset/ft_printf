/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:17:18 by tkomeno           #+#    #+#             */
/*   Updated: 2022/04/29 13:20:59 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playground.h"

int	main(void)
{
	printf("%d\n", ft_printf("%d %d %d hello %s world!\n", 3, INT_MAX, INT_MIN, (char *)NULL));
	printf("%d\n", printf("%d %d %d hello %s world!\n", 3, INT_MAX, INT_MIN, (char *)NULL));

	// printf("%d\n", ft_printf("hello"));
	// printf("%d\n", printf("hello"));

	// printf("%d\n", ft_printf("%c%c%c%c%c\n", 'h', 'e', 'l', 'l', 'o'));
	// printf("%d\n", printf("%c%c%c%c%c\n", 'h', 'e', 'l', 'l', 'o'));

	// printf("%d\n", ft_printf("%s", (char *)0));
	// printf("%d\n", printf("%s", (char *)0));
	return (0);
}
