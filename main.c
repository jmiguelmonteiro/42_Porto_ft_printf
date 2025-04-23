/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:37 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/23 12:56:52 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	char	c = 'c';
	
	printf("123456789012345678901234567890123456789012345678901234567890\n");
	printf("Bytes written    printf: %d\n",    printf("   printf %% %c\n", c));
	printf("Bytes written ft_printf: %d\n", ft_printf("ft_printf %% %c\n", c));

	return (0);
}