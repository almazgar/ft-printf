/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_float.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:31:42 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 13:27:10 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_float(t_print *ssl)
{
	long long int	i;
	__int128_t		r;
	__int128_t		r1;
	long long int	j;

	j = (ssl->accuracy == 0) ? 6 : ssl->accuracy;
	i = ssl->fl;
	if (ssl->fl < 0 && i == 0)
		ft_putchar('-', ssl);
	ssl->fl = ssl->fl - i;
	if (ssl->fl < 0)
		ssl->fl *= -1;
	r = ssl->fl * ft_power(10, j);
	r1 = ssl->fl * (ft_power(10, j + 1));
	if (r1 - r * 10 >= 5)
		r++;
	if ((ft_round(r) != 9 && (int)(ssl->fl * 10) == 9) || ((ssl->dot != 0 &&
	ssl->accuracy == 0 && ft_round(r) > 4)))
	{
		r = 0;
		i = (ssl->flex > 0) ? i + 1 : i - 1;
	}
	ft_putnbr(i, ssl);
	float2(i, r, j, ssl);
}
