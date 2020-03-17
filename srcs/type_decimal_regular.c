/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal_regular.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:46:38 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 16:15:51 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_decimal_regular(t_print *ssl)
{
	int i;

	i = decimal_pregular_space(ssl);
	if (ssl->a < 0)
		ft_putchar('-', ssl);
	if (ssl->accuracy >= ssl->len)
		decimal_pregular_zero(i, ssl);
	ssl->a = ssl->a < 0 ? (ssl->a * (-1)) : ssl->a;
	if (ssl->a != 0 || (ssl->a == 0 && ssl->accuracy > 1))
	{
		if (ssl->a == -1 * 9223372036854775808ull)
			ft_putstr("9223372036854775808", ssl);
		else
			ft_putnbr(convert(ssl, 10), ssl);
	}
	if (ssl->a == 0)
	{
		if (ssl->width >= 0 && ssl->accuracy == 0 && ssl->dot == 0)
			ft_putchar('0', ssl);
		else if (ssl->width != 0 && ssl->dot == 1 && ssl->accuracy == 0)
			ft_putchar(' ', ssl);
	}
	return (0);
}
