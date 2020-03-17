/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_after_dot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:37:12 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 17:55:34 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		len_after_dot(t_print *ssl)
{
	int		i;
	int		len;
	char	*s;

	i = ssl->flex;
	s = ft_itoa(i);
	len = ft_strlen(s) + 1;
	if (ssl->dot == 0)
		len += 6;
	else if (ssl->dot != 0 && ssl->accuracy == 0)
		len--;
	else
		len += ssl->accuracy;
	free(s);
	return (len);
}
