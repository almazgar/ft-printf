/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_octal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:19:44 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/24 19:10:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_octal_priority(t_print *ssl)
{
	char *str;

	ssl->a = convert(ssl, 8);
	str = ft_itoa8((unsigned long int)ssl->a);
	ssl->len = ft_strlen(str);
	free(str);
	if (ssl->minus != 0)
		type_octal_minus(ssl);
	else if (ssl->zero != 0)
		type_octal_zero(ssl);
	else
		type_octal_regular(ssl);
	return (0);
}
