/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:36:08 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/19 18:01:40 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		nbytes;
	
	nbytes = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) == '%')
		{
			write(1, '%', 1);
			format += 2;
			nbytes++;
			break;
		}
/* 		if (*format == '%' && *(format + 1) == 's')
		{
			printf("%s", "Tipo s");
			format += 2;
			break;
		}
 */		write(1, format, 1);
		nbytes++;
	}
	return (NULL);
}
