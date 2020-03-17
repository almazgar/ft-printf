/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:09:27 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/24 19:10:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		width(va_list ap, const char *format, t_print *ssl)
{
	if (format[ssl->i] == '*')
	{
		ssl->width = va_arg(ap, int);
		if (ssl->width < 0)
		{
			ssl->minus = '-';
			ssl->width *= -1;
		}
		ssl->i += 1;
	}
	else if (format[ssl->i] >= '0' && format[ssl->i] <= '9')
	{
		ssl->width = ft_atoi(&format[ssl->i]);
		while (format[ssl->i] >= '0' && format[ssl->i] <= '9')
			ssl->i += 1;
	}
	accuracy(ap, format, ssl);
	return (0);
}
