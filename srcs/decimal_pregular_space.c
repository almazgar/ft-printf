/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_pregular_space.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:12:57 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 18:14:46 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		decimal_pregular_space(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->width > ssl->len)
	{
		if (ssl->width > ssl->accuracy)
		{
			if (ssl->accuracy > ssl->len)
				i = ssl->width - ssl->accuracy;
			else
				i = ssl->width - ssl->len;
			if (ssl->a < 0 && ssl->accuracy >= ssl->len)
				i--;
			ft_putnchar(' ', i, ssl);
		}
	}
	return (i);
}
