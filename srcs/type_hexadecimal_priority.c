/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexadecimal_priority.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:26:14 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/30 16:13:48 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_hexadecimal_priority(const char *format, t_print *ssl)
{
	char *s;

	if (format[ssl->i] == 'x')
	{
		s = convert_hexadecimal_lcase(ssl, 16);
		ssl->str = s;
		free(s);
	}
	else
	{
		s = convert_hexadecimal_upcase(ssl, 16);
		ssl->str = s;
		free(s);
	}
	ssl->len = ft_strlen(ssl->str);
	ssl->lattice != 0 && ssl->a != 0 ? ssl->width -= 2 : ssl->width;
	if (ssl->minus != 0)
		type_hexadecimal_minus(format, ssl);
	else
		type_hexadecimal_regular(format, ssl);
	return (0);
}
