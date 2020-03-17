/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:00:49 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 15:49:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		find_percent(va_list ap, const char *format, t_print *ssl)
{
	ssl->i++;
	if (format[ssl->i] == '%' && ssl->i++)
		ft_putchar('%', ssl);
	else if (format[ssl->i] != '\0')
		flags(ap, format, ssl);
	return (0);
}
