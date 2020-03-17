/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char_sym.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:49:55 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/29 14:34:39 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_char_priority(va_list ap, const char *format, t_print *ssl)
{
	if (format[ssl->i] == 'c')
	{
		ssl->a = va_arg(ap, unsigned int);
		ssl->minus != 0 ? type_char_minus_c(ssl) : type_char_regular_c(ssl);
	}
	else
	{
		ssl->str = (char *)va_arg(ap, char *);
		ssl->minus != 0 ? type_char_minus_s(ssl) : type_char_regular_s(ssl);
	}
	return (0);
}
