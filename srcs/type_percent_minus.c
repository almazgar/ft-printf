/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_percnet_minus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 22:12:33 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 15:02:21 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_percent_minus(t_print *ssl)
{
	char c;

	c = '%';
	if (ssl->width && c)
	{
		ft_putchar(c, ssl);
		ft_putnchar(' ', ssl->width - 1, ssl);
	}
	else if (ssl->width && !c)
	{
		ft_putnchar(' ', ssl->width, ssl);
	}
	else if (c)
		ft_putchar(ssl->a, ssl);
	return (0);
}
