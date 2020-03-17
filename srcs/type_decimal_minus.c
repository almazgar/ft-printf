/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal_minus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:55:49 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 17:25:05 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_decimal_minus(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->a < 0)
		ft_putchar('-', ssl);
	if (ssl->a >= 0 && ssl->plus)
		ft_putchar('+', ssl);
	else if (ssl->a >= 0 && ssl->space)
		ft_putchar(' ', ssl);
	if (ssl->accuracy > ssl->len)
		i = (ssl->a <= 0) ? ssl->accuracy - ssl->len + 1 :
				ssl->accuracy - ssl->len;
	ft_putnchar('0', i, ssl);
	if (ssl->a >= 0 && (ssl->plus || ssl->space))
		i++;
	if ((ssl->a != 0) || (ssl->a == 0 && ssl->dot == 0))
	{
		ssl->a = (ssl->a < 0) ? ssl->a * (-1) : ssl->a;
		ft_putnbr(convert(ssl, 10), ssl);
		i = ssl->width - i - ssl->len;
	}
	else
		i = ssl->width - i;
	i > 0 ? ft_putnchar(' ', i, ssl) : 0;
	return (0);
}
