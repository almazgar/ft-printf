/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal_plus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:54:04 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 18:09:07 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_decimal_plus(const char *format, t_print *ssl)
{
	int i;

	i = decimal_pplus_space(ssl);
	if (ssl->a < 0 && format[ssl->i] != 'u')
		ft_putchar('-', ssl);
	if (ssl->a >= 0 && ssl->plus && format[ssl->i] != 'u')
		ft_putchar('+', ssl);
	else if (ssl->a >= 0 && ssl->space && format[ssl->i] != 'u')
		ft_putchar(' ', ssl);
	if (ssl->zero && !ssl->dot)
		ft_putnchar('0', i, ssl);
	if (ssl->accuracy > ssl->len)
	{
		i = (ssl->a <= 0) ? ssl->accuracy - ssl->len + 1 :
				ssl->accuracy - ssl->len;
		if (i > 0)
			ft_putnchar('0', i, ssl);
	}
	if ((ssl->a != 0) || (ssl->a == 0 && ssl->dot == 0))
	{
		ssl->a = (ssl->a < 0) ? ssl->a * (-1) : ssl->a;
		ft_putnbr(convert(ssl, 10), ssl);
	}
	return (0);
}
