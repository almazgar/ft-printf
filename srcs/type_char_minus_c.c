/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:01:38 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/29 16:19:38 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_char_minus_c(t_print *ssl)
{
	if (ssl->width && ssl->a)
	{
		ft_putchar(ssl->a, ssl);
		ft_putnchar(' ', ssl->width - 1, ssl);
	}
	else if (ssl->width && !ssl->a)
	{
		ft_putchar(ssl->a, ssl);
		ft_putnchar(' ', ssl->width - 1, ssl);
	}
	else if (ssl->a)
		ft_putchar(ssl->a, ssl);
	return (0);
}
