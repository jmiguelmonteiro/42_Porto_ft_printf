/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:36:08 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/16 19:19:45 by josemigu         ###   ########.fr       */
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
		if (*format == '%' && *(format + 1) == 's')
		{
			printf("%s", "Tipo s");
			format++;
		}
		else
		{
			write(1, format, 1);
			nbytes++;
		}
		format++;
	}
	return (NULL);
}
