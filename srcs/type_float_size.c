/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 21:32:09 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 12:40:48 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_float_size(va_list ap, t_print *ssl)
{
	if (ssl->size == 1)
		ssl->fl = va_arg(ap, double);
	else if (ssl->size == 3)
		ssl->fl = va_arg(ap, long double);
	else
		ssl->fl = (double)va_arg(ap, double);
	ssl->flex = ssl->fl;
	ssl->len = len_after_dot(ssl);
	type_float_priority(ssl);
	return (0);
}
