/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:37 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/23 18:04:51 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char			c = 'c';
	char			*s = "str123";
	char			*s_null = NULL;
	char			*p = &c;
	unsigned int	x = 42;


	printf("123456789012345678901234567890123456789012345678901234567890\n");
	printf("Bytes written    printf: %d\n",    printf("   printf: "\
		"%c %s %s\n", c, s, s_null));
 	printf("Bytes written ft_printf: %d\n", ft_printf("ft_printf: "\
		"%c %s %s\n", c, s, s_null));

	printf("123456789012345678901234567890123456789012345678901234567890\n");
	printf("Bytes written    printf: %d\n",    printf("   printf: "\
		"%p %u %x %X %%\n", p, x, x, x));
 	printf("Bytes written ft_printf: %d\n", ft_printf("ft_printf: "\
		"%p %u %x %X %%\n", p, x, x, x));

	return (0);
}