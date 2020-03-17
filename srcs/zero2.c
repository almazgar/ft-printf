/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:21:45 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 13:23:45 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	zero2(long long int i, __int128_t r, long long int j, t_print *ssl)
{
	if (ssl->dot == 0 || (ssl->dot != 0 && ssl->accuracy != 0) || ssl->lattice)
	{
		ft_putchar('.', ssl);
		i = ft_strlen(ft_itoa(r));
		if ((j - i) > 0)
			ft_putnchar('0', j - i, ssl);
		ft_putnbr(r, ssl);
	}
	else if (ssl->lattice)
		ft_putchar('.', ssl);
}
