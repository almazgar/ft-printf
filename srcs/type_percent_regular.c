/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_percent_regular.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 21:37:46 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/30 22:08:38 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_percent_regular(t_print *ssl)
{
	char c;

	c = '%';
	if (ssl->zero && c)
		ft_putnchar('0', ssl->width - 1, ssl);
	else if (ssl->zero)
		ft_putnchar('0', ssl->width, ssl);
	if (!ssl->zero && ssl->width && c)
		ft_putnchar(' ', ssl->width - 1, ssl);
	else if (!ssl->zero && ssl->width && !c)
		ft_putnchar(' ', ssl->width, ssl);
	if (c)
		ft_putchar(c, ssl);
	return (0);
}
