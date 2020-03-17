/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal_pregular_space.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:58:17 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 19:01:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		hexadecimal_pregular_space(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->width > ssl->len)
	{
		if (ssl->width > ssl->accuracy)
		{
			if (ssl->accuracy >= ssl->len)
				i = ssl->width - ssl->accuracy;
			else if (ssl->a != 0 && (!ssl->zero || ssl->accuracy))
				i = ssl->width - ssl->len;
			else if (ssl->zero)
				i = 0;
			else if (!ssl->accuracy && !ssl->dot)
				i = ssl->width - 1;
			else
				i = ssl->width;
			ft_putnchar(' ', i, ssl);
		}
	}
	return (i);
}
