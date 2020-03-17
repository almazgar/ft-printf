/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:25:22 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 18:06:35 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	float2(long long int i, __int128_t r, long long int j, t_print *ssl)
{
	char *s;

	if (ssl->dot == 0 || (ssl->dot != 0 && ssl->accuracy != 0))
	{
		ft_putchar('.', ssl);
		s = ft_itoa(r);
		i = ft_strlen(s);
		if ((j - i) > 0)
			ft_putnchar('0', j - i, ssl);
		ft_putnbr(r, ssl);
		free(s);
	}
	else if (ssl->lattice)
		ft_putchar('.', ssl);
}
