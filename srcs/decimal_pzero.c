/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_pzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:26:16 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 18:28:25 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		decimal_pzero(t_print *ssl)
{
	int	i;

	i = 0;
	if (ssl->width > ssl->len)
	{
		if (ssl->accuracy >= ssl->len)
		{
			i = ssl->width - ssl->accuracy;
			i = (ssl->a < 0) ? i - 1 : i;
		}
		else
			i = ssl->width - ssl->len;
		if (i >= 0)
		{
			if (ssl->accuracy)
				ft_putnchar(' ', i, ssl);
			else
			{
				if (ssl->a < 0)
					ft_putchar('-', ssl);
				ft_putnchar('0', i, ssl);
			}
		}
	}
	return (i);
}
