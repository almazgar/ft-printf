/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:31:34 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 13:33:34 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus2(int i, t_print *ssl)
{
	if (ssl->width != 0 && ssl->width > ssl->accuracy)
	{
		i = ssl->width - ssl->len - i;
		if (ssl->lattice && (ssl->dot == 0 || (ssl->dot != 0 &&
		ssl->accuracy == 0)))
			i--;
		if (i > 0)
			ft_putnchar(' ', i, ssl);
	}
}
