/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:36:08 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/23 13:06:24 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int process_conversion(const char conversion_type, va_list args)
{
	int	nbytes;

	nbytes = 0;
	if (conversion_type == 'c')
		nbytes += printf_putchar(va_arg(args, int));
	if (conversion_type == '%')
		nbytes += printf_putchar('%');
	return (nbytes);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		nbytes;
	
	nbytes = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) != '\0')
			{
				nbytes += process_conversion(*(format + 1), args);
				format++;
			}
		} else
			nbytes += printf_putchar(*format);
		format++;
 	}
	va_end(args);
	return (nbytes);
}
