/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_pregular_zero.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:56:41 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 16:58:50 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	decimal_pregular_zero(int i, t_print *ssl)
{
	if (ssl->a < 0)
		i = ssl->accuracy - ssl->len + 1;
	else
		i = ssl->accuracy - ssl->len;
	ft_putnchar('0', i, ssl);
}
