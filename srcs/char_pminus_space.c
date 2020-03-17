/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_pminus_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:40:31 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 17:47:04 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		char_pminus_space(t_print *ssl, int len)
{
	if (ssl->accuracy > len || !ssl->dot)
	{
		ft_putnstr(ssl->str, len, ssl);
		ft_putnchar(' ', ssl->width - len, ssl);
	}
	else
	{
		ft_putnstr(ssl->str, ssl->accuracy, ssl);
		ft_putnchar(' ', ssl->width - ssl->accuracy, ssl);
	}
	return (0);
}
