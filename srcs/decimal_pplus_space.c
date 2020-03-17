/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_pplus_space.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:57:23 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 18:09:07 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		decimal_pplus_space(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->width > ssl->len && ssl->width > ssl->accuracy)
	{
		if (ssl->accuracy > ssl->len)
			i = (ssl->a <= 0) ? ssl->width - ssl->accuracy - 1 :
					ssl->width - ssl->accuracy;
		else
			i = ssl->width - ssl->len;
		if (ssl->a >= 0 && (ssl->plus || ssl->space))
			i--;
		if (ssl->a == 0 && ssl->dot == 1)
			i++;
		if (!ssl->zero || ssl->dot)
			ft_putnchar(' ', i, ssl);
	}
	return (i);
}
