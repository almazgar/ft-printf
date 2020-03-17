/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 22:40:34 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/02 15:26:27 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	search_type(va_list ap, const char *format, t_print *ssl)
{
	if (format[ssl->i] == 'd' || format[ssl->i] == 'i' || format[ssl->i] == 'u')
		type_decimal_size(format, ap, ssl);
	else if (format[ssl->i] == 'o')
		type_octal_size(ap, ssl);
	else if (format[ssl->i] == 'x' || format[ssl->i] == 'X')
		type_hexadecimal_size(ap, format, ssl);
	else if (format[ssl->i] == 'f')
		type_float_size(ap, ssl);
	else if (format[ssl->i] == 'c' || format[ssl->i] == 's')
		type_char_priority(ap, format, ssl);
	else if (format[ssl->i] == 'p')
		type_pointer_regular(va_arg(ap, void*), ssl);
	else if (format[ssl->i] == '%')
		type_percent_priority(ssl);
	else
		ft_putchar(format[ssl->i], ssl);
	ssl->i += 1;
	return (0);
}
