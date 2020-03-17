/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_simple_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 14:54:28 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 14:57:34 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	decimal_simple_size(const char *format, va_list ap, t_print *ssl)
{
	if (format[ssl->i] == 'u')
		ssl->a = va_arg(ap, unsigned int);
	else
		ssl->a = va_arg(ap, int);
}
