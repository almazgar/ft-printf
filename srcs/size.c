/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:02:58 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/08 15:20:23 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		size(va_list ap, const char *format, t_print *ssl)
{
	if (format[ssl->i] == 'l' || format[ssl->i] == 'h' || format[ssl->i] == 'L')
	{
		if (format[ssl->i] == 'l')
			ssl->size = 1;
		else if (format[ssl->i] == 'h')
			ssl->size = 2;
		else if (format[ssl->i] == 'L')
			ssl->size = 3;
		ssl->i += 1;
		if (format[ssl->i] == 'l' || format[ssl->i] == 'h')
		{
			if (format[ssl->i] == 'l')
				ssl->size = 4;
			else if (format[ssl->i] == 'h')
				ssl->size = 5;
			ssl->i += 1;
		}
	}
	search_mistake(format, ssl);
	if (format[ssl->i] != '\0')
		search_type(ap, format, ssl);
	return (0);
}
