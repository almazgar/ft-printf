/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_space.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 22:03:01 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 13:11:23 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_float_space(t_print *ssl)
{
	int i;
	int k;

	i = (ssl->fl > 0) ? 1 : 0;
	k = 0;
	if (ssl->width != 0 && ssl->width > ssl->accuracy)
	{
		k = ssl->width - i - ssl->len;
		if (k > 0)
			ft_putnchar(' ', k, ssl);
	}
	if (ssl->space == ' ' && ssl->fl >= 0)
		ft_putchar(' ', ssl);
	convert_float(ssl);
	return (0);
}
