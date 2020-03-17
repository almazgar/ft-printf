/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accuracy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:06:20 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/24 19:10:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		accuracy(va_list ap, const char *format, t_print *ssl)
{
	if (format[ssl->i] == '.')
	{
		ssl->i += 1;
		ssl->dot = 1;
		if (format[ssl->i] == '*')
		{
			ssl->accuracy = va_arg(ap, int);
			ssl->i += 1;
		}
		else
		{
			ssl->accuracy = ft_atoi(&format[ssl->i]);
			while (format[ssl->i] >= '0' && format[ssl->i] <= '9')
				ssl->i += 1;
		}
	}
	size(ap, format, ssl);
	return (0);
}
