/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:55:49 by lgarse            #+#    #+#             */
/*   Updated: 2019/11/24 19:10:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char *str)
{
	short int		znak;
	unsigned long	itog;

	itog = 0;
	znak = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\v' || *str == '\r')
		++str;
	if (*str == '-' && ++str)
		znak = -1;
	else if (*str == '+')
		++str;
	while ('0' <= *str && *str <= '9')
		itog = itog * 10UL + ((unsigned long)*str++ - 48UL);
	if (itog > 9223372036854775807UL && znak == 1)
		itog = -1;
	if (itog > 9223372036854775808UL && znak == -1)
		itog = 0;
	return ((int)itog * znak);
}
