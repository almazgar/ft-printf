/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:41:01 by avenonat          #+#    #+#             */
/*   Updated: 2019/11/24 19:10:57 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	free_list(t_print *ssl)
{
	ssl->zero = 0;
	ssl->plus = 0;
	ssl->minus = 0;
	ssl->space = 0;
	ssl->lattice = 0;
	ssl->width = 0;
	ssl->accuracy = 0;
	ssl->size = 0;
	ssl->a = 0;
	ssl->fl = 0;
	ssl->flex = 0;
	ssl->len = 0;
	ssl->dot = 0;
	ssl->str = 0;
}
