/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:57:29 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 19:06:27 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_decimal_space(const char *format, t_print *ssl)
{
	int i;
	int y;

	y = 0;
	i = 0;
	y = ssl->accuracy - ssl->len > 0 ? ssl->accuracy - ssl->len : ssl->accuracy;
	y = ssl->a <= 0 ? y += 1 : y;
	if (ssl->a >= 0)
		decimal_pspace_if(format, ssl, y);
	else
		decimal_pspace_else(ssl);
	if (ssl->width < 0 && ssl->accuracy > 0 && ssl->accuracy > ssl->len &&
	ssl->len == 1 && ssl->a > 0)
		i = y;
	else if (ssl->accuracy > 0 && ssl->accuracy > ssl->len)
		i = ssl->len == 1 ? y - 1 : y;
	if (i != 0)
		ft_putnchar('0', i, ssl);
	else if (ssl->zero && ((convert(ssl, 10) == 0) || (ssl->width > ssl->len
	&& !ssl->accuracy)))
		ft_putnchar('0', ssl->width - ssl->len, ssl);
	ft_putnbr(convert(ssl, 10), ssl);
	return (0);
}
