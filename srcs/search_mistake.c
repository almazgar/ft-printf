/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_mistake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 15:23:25 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/08 15:31:50 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	search_mistake(const char *format, t_print *ssl)
{
	while (format[ssl->i] != '\0' && (format[ssl->i] != 'd' &&
	format[ssl->i] != 'i' && format[ssl->i] != 'u' && format[ssl->i] != 'o'
	&& format[ssl->i] != 'x' && format[ssl->i] != 'X' && format[ssl->i] != 'f'
	&& format[ssl->i] != 'c' && format[ssl->i] != 's' && format[ssl->i] != 'p'
	&& format[ssl->i] != '%'))
		ssl->i += 1;
}
