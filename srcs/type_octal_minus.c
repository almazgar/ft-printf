/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_octal_minus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:37:44 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/01 15:59:18 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_octal_minus(t_print *ssl)
{
	int i;

	i = 0;
	if (ssl->a >= 0 && ssl->plus)
		ft_putchar('+', ssl);
	else if (ssl->a >= 0 && ssl->space)
		ft_putchar(' ', ssl);
	if (ssl->accuracy > ssl->len)
		i = (ssl->a <= 0) ? ssl->accuracy - ssl->len + 1 :
				ssl->accuracy - ssl->len;
	if (ssl->lattice && (i == 0 || i + ssl->len < ssl->accuracy))
		i++;
	ft_putnchar('0', i, ssl);
	ssl->a >= 0 && (ssl->plus || ssl->space) ? i++ : i;
	if ((ssl->a != 0) || (ssl->a == 0 && ssl->dot == 0 && !ssl->lattice))
	{
		ssl->a = (ssl->a < 0) ? ssl->a * (-1) : ssl->a;
		ft_putnbr(ssl->a, ssl);
		i = ssl->width - i - ssl->len;
	}
	else
		i = ssl->width - i;
	if (i > 0)
		ft_putnchar(' ', i, ssl);
	return (0);
}
