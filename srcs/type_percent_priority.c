/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_percent_priority.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 22:11:12 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/30 22:11:12 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		type_percent_priority(t_print *ssl)
{
	ssl->minus != 0 ? type_percent_minus(ssl) : type_percent_regular(ssl);
	return (0);
}
