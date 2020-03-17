/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexadecimal_minus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:52:00 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 14:18:37 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_hexadecimal_minus(const char *format, t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->lattice != 0 && ssl->a != 0)
		format[ssl->i] == 'x' ? ft_putstr("0x", ssl) : ft_putstr("0X", ssl);
	if (ssl->accuracy > ssl->len)
		i = ssl->a == 0 ? ssl->accuracy : ssl->accuracy - ssl->len;
	ft_putnchar('0', i, ssl);
	if (ssl->str && ssl->a != 0)
	{
		ft_putstr(ssl->str, ssl);
		i = ssl->width - i - ssl->len;
	}
	else if (ssl->str && ssl->a == 0 && !ssl->accuracy && !ssl->dot)
	{
		ft_putstr(ssl->str, ssl);
		i = ssl->width - i - ssl->len;
	}
	else
		i = ssl->width - i;
	if (i > 0)
		ft_putnchar(' ', i, ssl);
	return (0);
}
