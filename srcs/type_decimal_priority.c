/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal_priority.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 16:38:46 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/02 15:16:25 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_decimal_priority(const char *format, t_print *ssl)
{
	char *str;

	str = ft_itoa(ssl->a);
	ssl->len = ft_strlen(str);
	free(str);
	if (ssl->zero != 0 || ssl->plus != 0 || ssl->minus != 0 || ssl->space != 0)
	{
		if (ssl->minus != 0)
			type_decimal_minus(ssl);
		else if (ssl->plus != 0)
			type_decimal_plus(format, ssl);
		else if (ssl->space != 0)
			type_decimal_space(format, ssl);
		else if (ssl->zero != 0)
			type_decimal_zero(ssl);
	}
	else
		type_decimal_regular(ssl);
	return (0);
}
