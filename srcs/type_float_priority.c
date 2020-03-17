/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_priority.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 21:38:38 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/24 19:10:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_float_priority(t_print *ssl)
{
	if (ssl->zero != 0 || ssl->plus != 0 || ssl->minus != 0 || ssl->space != 0)
	{
		if (ssl->minus != 0)
			type_float_minus(ssl);
		else if (ssl->zero != 0)
			type_float_zero(ssl);
		else if (ssl->plus != 0)
			type_float_plus(ssl);
		else if (ssl->space != 0)
			type_float_space(ssl);
	}
	else
		type_float_regular(ssl);
	return (0);
}
