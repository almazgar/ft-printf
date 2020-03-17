/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal_zero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:51:52 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 18:31:49 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_decimal_zero(t_print *ssl)
{
	int	i;
	int m;

	m = 0;
	i = decimal_pzero(ssl);
	if (ssl->width > ssl->len && i >= 0 && !ssl->accuracy && ssl->a < 0)
		m = 1;
	if (ssl->a < 0 && m == 0)
		ft_putchar('-', ssl);
	if (ssl->accuracy >= ssl->len)
	{
		i = ssl->accuracy - ssl->len;
		i = (ssl->a < 0) ? i + 1 : i;
		ft_putnchar('0', i, ssl);
	}
	ssl->a = (ssl->a < 0) ? ssl->a * (-1) : ssl->a;
	ft_putnbr(convert(ssl, 10), ssl);
	return (0);
}
