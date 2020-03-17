/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octal_pregular_space.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 18:45:50 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 18:47:48 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		octal_pregular_space(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->width > ssl->len)
	{
		if (ssl->accuracy >= ssl->len)
			i = ssl->width - ssl->accuracy;
		else
			i = ssl->width - ssl->len;
		i = (ssl->lattice && ssl->a != 0 && ssl->width <= ssl->len + i)
			? i - 1 : i;
		if (i >= 0)
			ft_putnchar(' ', i, ssl);
	}
	return (i);
}
