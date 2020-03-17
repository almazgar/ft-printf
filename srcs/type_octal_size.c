/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_octal_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:55:15 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/02 21:51:18 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_octal_size(va_list ap, t_print *ssl)
{
	if (ssl->size == 4)
		ssl->a = (unsigned long long)va_arg(ap, long);
	else if (ssl->size == 5)
		ssl->a = (unsigned char)va_arg(ap, long);
	else if (ssl->size == 1)
		ssl->a = va_arg(ap, unsigned long int);
	else if (ssl->size == 2)
		ssl->a = (unsigned short)va_arg(ap, long);
	else
		ssl->a = (unsigned int)va_arg(ap, long);
	type_octal_priority(ssl);
	return (0);
}
