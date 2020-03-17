/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char_regular.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:09:55 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 17:40:27 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_char_regular_s(t_print *ssl)
{
	int len;

	len = 0;
	ssl->str == NULL ? ssl->str = "(null)" : ssl->str;
	len = ft_strlen(ssl->str);
	if (ssl->width >= ssl->accuracy && ssl->accuracy)
		char_pregular_space(ssl, len);
	else if (ssl->width && !ssl->accuracy && ssl->dot)
		ft_putnchar(' ', ssl->width, ssl);
	else if (ssl->width >= len)
	{
		ft_putnchar(' ', ssl->width - len, ssl);
		ft_putstr(ssl->str, ssl);
	}
	else if (!ssl->width && ssl->accuracy)
		ssl->accuracy > len ? ft_putstr(ssl->str, ssl) :
		ft_putnstr(ssl->str, ssl->accuracy, ssl);
	else if (ssl->accuracy > ssl->width)
		ssl->accuracy >= len ? ft_putstr(ssl->str, ssl) :
		ft_putnstr(ssl->str, ssl->accuracy, ssl);
	else if (len > ssl->width && len > ssl->accuracy && !ssl->dot)
		ft_putstr(ssl->str, ssl);
	return (0);
}
