/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_octal_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:49:42 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 15:03:16 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_octal_zero(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->width > ssl->len)
	{
		if (ssl->accuracy >= ssl->len)
			i = ssl->width - ssl->accuracy;
		else
			i = ssl->width - ssl->len;
		i = (ssl->lattice && ssl->width <= ssl->len + i) ? i - 1 : i;
		if (i >= 0)
			ssl->dot ? ft_putnchar(' ', i, ssl) : ft_putnchar('0', i, ssl);
	}
	if (ssl->lattice && (i == 0 || (i + ssl->len < ssl->width)))
		ft_putchar('0', ssl);
	i = (ssl->accuracy > ssl->len) ? ssl->accuracy - ssl->len : 0;
	i = (ssl->lattice) ? i - 1 : i;
	if (i > 0)
		ft_putnchar('0', i, ssl);
	ft_putnbr(ssl->a, ssl);
	return (0);
}
