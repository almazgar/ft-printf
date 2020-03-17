/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_plus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:01:34 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/24 19:10:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_float_plus(t_print *ssl)
{
	int i;
	int k;

	i = (ssl->fl > 0) ? 1 : 0;
	k = 0;
	if (ssl->width != 0 && ssl->width > ssl->accuracy)
	{
		k = ssl->width - ssl->len - i;
		if (k > 0)
			ft_putnchar(' ', k, ssl);
	}
	if (ssl->fl >= 0)
		ft_putchar('+', ssl);
	else
	{
		ft_putchar('-', ssl);
		ssl->fl *= -1;
	}
	convert_float(ssl);
	return (0);
}
