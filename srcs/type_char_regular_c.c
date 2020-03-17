/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char_regular.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:09:55 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 19:33:36 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_char_regular_c(t_print *ssl)
{
	if (ssl->width && ssl->a >= 0)
	{
		ft_putnchar(' ', ssl->width - 1, ssl);
		ft_putchar(ssl->a, ssl);
	}
	else if (ssl->width && !ssl->a)
		ft_putnchar(' ', ssl->width, ssl);
	else if (ssl->a >= 0)
		ft_putchar(ssl->a, ssl);
	return (0);
}
