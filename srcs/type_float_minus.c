/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_minus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 21:58:50 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 13:13:34 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_float_minus(t_print *ssl)
{
	int	i;

	i = 0;
	if (ssl->fl >= 0 && (ssl->plus != 0 || ssl->space != 0))
	{
		i++;
		if (ssl->plus != 0)
			ft_putchar('+', ssl);
		if (ssl->space != 0)
			ft_putchar(' ', ssl);
	}
	if (ssl->fl < 0)
	{
		ft_putchar('-', ssl);
		ssl->fl *= -1;
	}
	convert_float(ssl);
	minus2(i, ssl);
	return (0);
}
