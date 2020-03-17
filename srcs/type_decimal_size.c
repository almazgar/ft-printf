/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 00:09:30 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 13:09:17 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_decimal_size(const char *format, va_list ap, t_print *ssl)
{
	if (ssl->size == 4)
		ssl->a = va_arg(ap, long long int);
	else if (ssl->size == 1)
	{
		if (format[ssl->i] == 'u')
			ssl->a = va_arg(ap, unsigned long int);
		else
			ssl->a = va_arg(ap, long int);
	}
	else if (ssl->size == 5)
		ssl->a = format[ssl->i] == 'u' ? (unsigned char)va_arg(ap, int)
				: (char)va_arg(ap, int);
	else if (ssl->size == 2)
	{
		if (format[ssl->i] == 'u')
			ssl->a = (unsigned short)(va_arg(ap, unsigned int));
		else
			ssl->a = (short)va_arg(ap, int);
	}
	else
		decimal_simple_size(format, ap, ssl);
	type_decimal_priority(format, ssl);
	return (0);
}
