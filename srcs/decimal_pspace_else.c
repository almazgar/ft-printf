/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_pspace_else.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:09:33 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 19:12:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	decimal_pspace_else(t_print *ssl)
{
	if (ssl->width > ssl->accuracy)
	{
		if (ssl->accuracy > ssl->len)
			ft_putnchar(' ', ssl->width - ssl->accuracy - 1, ssl);
		else if (ssl->accuracy || (!ssl->zero && ssl->width > ssl->len))
			ft_putnchar(' ', ssl->width - ssl->len, ssl);
	}
	ft_putchar('-', ssl);
	ssl->a *= -1;
}
