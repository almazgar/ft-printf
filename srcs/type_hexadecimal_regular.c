/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexadecimal_regular.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 20:32:24 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 14:18:37 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_hexadecimal_regular(const char *format, t_print *ssl)
{
	int i;

	i = hexadecimal_pregular_space(ssl);
	if (ssl->lattice != 0 && ssl->a != 0)
		format[ssl->i] == 'x' ? ft_putstr("0x", ssl) : ft_putstr("0X", ssl);
	if (ssl->accuracy >= ssl->len)
	{
		i = ssl->a == 0 ? ssl->accuracy : ssl->accuracy - ssl->len;
		ft_putnchar('0', i, ssl);
	}
	else if (ssl->zero && ssl->a == 0)
		ft_putnchar('0', ssl->width - 1, ssl);
	else if (ssl->zero && ssl->width > ssl->len && !ssl->accuracy)
		ft_putnchar('0', ssl->width - ssl->len, ssl);
	if (ssl->a != 0 || !ssl->dot)
		ft_putstr(ssl->str, ssl);
	return (0);
}
