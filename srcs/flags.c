/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:28:24 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/02 15:46:46 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		flags(va_list ap, const char *format, t_print *ssl)
{
	while (format[ssl->i] == '+' || format[ssl->i] == ' ' ||
	format[ssl->i] == '-' || format[ssl->i] == '0' || format[ssl->i] == '#')
	{
		if (format[ssl->i] == '+')
			ssl->plus = '+';
		else if (format[ssl->i] == ' ')
			ssl->space = ' ';
		else if (format[ssl->i] == '-')
			ssl->minus = '-';
		else if (format[ssl->i] == '0')
			ssl->zero = '0';
		else if (format[ssl->i] == '#')
			ssl->lattice = '#';
		ssl->i += 1;
	}
	if (ssl->plus == '+' && ssl->space == ' ')
		ssl->space = 0;
	if (ssl->minus == '-' && ssl->zero == '0')
		ssl->zero = 0;
	if (format[ssl->i] != '\0')
		width(ap, format, ssl);
	return (0);
}
