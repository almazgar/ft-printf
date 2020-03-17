/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_print_space.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:20:16 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 17:38:10 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		char_pregular_space(t_print *ssl, int len)
{
	if (ssl->accuracy > len || !ssl->dot)
	{
		ft_putnchar(' ', ssl->width - len, ssl);
		ft_putnstr(ssl->str, len, ssl);
	}
	else
	{
		ft_putnchar(' ', ssl->width - ssl->accuracy, ssl);
		ft_putnstr(ssl->str, ssl->accuracy, ssl);
	}
	return (0);
}
