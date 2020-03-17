/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexadecimal_size.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:13:32 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/02 20:36:22 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_hexadecimal_size(va_list ap, const char *format, t_print *ssl)
{
	format += 0;
	if (ssl->size == 4)
		ssl->a = va_arg(ap, long long int);
	else if (ssl->size == 5)
		ssl->a = (unsigned char)va_arg(ap, long int);
	else if (ssl->size == 1)
		ssl->a = (unsigned long)va_arg(ap, long int);
	else if (ssl->size == 2)
		ssl->a = (unsigned short)va_arg(ap, long int);
	else
		ssl->a = va_arg(ap, unsigned int);
	type_hexadecimal_priority(format, ssl);
	return (0);
}
