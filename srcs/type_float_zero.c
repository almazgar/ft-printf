/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:04:32 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 13:11:28 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_float_zero(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->plus != 0 && ssl->fl >= 0)
	{
		ft_putchar('+', ssl);
		i++;
	}
	else if (ssl->space != 0 && ssl->fl >= 0)
	{
		ft_putchar(' ', ssl);
		i++;
	}
	else if (ssl->fl < 0)
		ft_putchar('-', ssl);
	if (ssl->width != 0 && ssl->width > ssl->accuracy)
		if (ssl->width > ssl->len + i)
			ft_putnchar('0', ssl->width - ssl->len - i, ssl);
	convert_float_zero(ssl);
	return (0);
}
