/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:06:58 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 15:47:27 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char *format, ...)
{
	t_print	ssl;
	va_list ap;

	va_start(ap, format);
	ssl.i = 0;
	ssl.nb = 0;
	while (format[ssl.i] != '\0')
	{
		free_list(&ssl);
		while (format[ssl.i] != '%' && format[ssl.i] != '\0')
		{
			if (format[ssl.i] == '{' && (format[ssl.i + 1] == 'R' ||
			format[ssl.i + 1] == 'B' || format[ssl.i + 1] == 'G' ||
			format[ssl.i + 1] == 'E'))
				accept_color(format, &ssl);
			if (format[ssl.i] == '%')
				break ;
			ft_putchar(format[ssl.i], &ssl);
			ssl.i++;
		}
		if (format[ssl.i] == '%')
			find_percent(ap, format, &ssl);
	}
	va_end(ap);
	return (ssl.nb);
}
