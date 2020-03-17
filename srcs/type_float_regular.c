/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float_regular.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:38:27 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 12:45:07 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_float_regular(t_print *ssl)
{
	if (ssl->width != 0 && ssl->width > ssl->accuracy)
		if (ssl->width > ssl->len)
			ft_putnchar(' ', ssl->width - ssl->len, ssl);
	convert_float(ssl);
	return (0);
}
