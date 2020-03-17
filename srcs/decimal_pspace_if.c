/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal_pspace_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 19:03:57 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 19:03:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	decimal_pspace_if(const char *format, t_print *ssl, int y)
{
	if ((ssl->len > ssl->width || ssl->accuracy > ssl->width) &&
	format[ssl->i] != 'u')
		ft_putchar(' ', ssl);
	ssl->width -= 1;
	if (ssl->width > ssl->accuracy)
	{
		if (ssl->accuracy && ssl->accuracy > ssl->len)
			ft_putnchar(' ', ssl->width - ssl->accuracy + 1, ssl);
		else if (ssl->accuracy && ssl->width > ssl->len && ssl->zero)
			ft_putnchar(' ', ssl->width - ssl->accuracy, ssl);
		else if (ssl->accuracy && ssl->zero)
			ft_putnchar(' ', ssl->width - ssl->accuracy + 1, ssl);
		else if (ssl->accuracy && ssl->accuracy < ssl->len)
			ft_putnchar(' ', (ssl->width - y), ssl);
		else if (!ssl->accuracy && ssl->width > ssl->len && ssl->zero)
			ft_putchar(' ', ssl);
		else if (!ssl->accuracy && ssl->width > ssl->len)
			ft_putnchar(' ', (ssl->width - ssl->len + 1), ssl);
		else if (!ssl->accuracy && ssl->width < ssl->len)
			ft_putnchar(' ', (ssl->width - ssl->len + 2), ssl);
	}
}
