/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 14:10:27 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 12:38:40 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

__int128_t	convert(t_print *ssl, int base)
{
	__int128_t		bin;
	__int128_t		k;
	long long int	i;

	bin = 0;
	k = 1;
	i = ssl->a;
	while (i)
	{
		bin += (i % base) * k;
		k *= 10;
		i /= base;
	}
	return (bin);
}
