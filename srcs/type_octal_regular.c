/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_octal_regular.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:50:56 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 15:00:35 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_octal_regular(t_print *ssl)
{
	int i;

	i = octal_pregular_space(ssl);
	if (ssl->accuracy >= ssl->len)
	{
		i = ssl->accuracy - ssl->len;
		ft_putnchar('0', i, ssl);
	}
	if (ssl->lattice && ssl->accuracy <= ssl->len)
		ft_putchar('0', ssl);
	ssl->a = ssl->a < 0 ? (ssl->a * (-1)) : ssl->a;
	if (ssl->a != 0 || (ssl->a == 0 && ssl->accuracy > 1))
		ft_putnbr(ssl->a, ssl);
	if (ssl->a == 0 && !ssl->lattice)
	{
		if (ssl->width >= 0 && ssl->accuracy == 0 && ssl->dot == 0)
			ft_putchar('0', ssl);
		else if (ssl->width != 0 && ssl->dot == 1 && ssl->accuracy == 0)
			ft_putchar(' ', ssl);
	}
	return (0);
}
