/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pointer_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:03:29 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/02 18:23:25 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_pointer_regular(void *b, t_print *ssl)
{
	char *str;
	char *buff;

	ssl->a = (unsigned long)b;
	str = convert_hexadecimal_lcase(ssl, 16);
	buff = str;
	str = ft_strjoin("0x", str);
	free(buff);
	if (ssl->minus != 0)
	{
		ft_putstr(str, ssl);
		if (ssl->width != 0 && (ssl->width > (int)ft_strlen(str)))
			ft_putnchar(' ', ssl->width - (int)ft_strlen(str), ssl);
	}
	else
	{
		if (ssl->width != 0 && (ssl->width > (int)ft_strlen(str)))
			ft_putnchar(' ', ssl->width - (int)ft_strlen(str), ssl);
		ft_putstr(str, ssl);
	}
	free(str);
	return (0);
}
