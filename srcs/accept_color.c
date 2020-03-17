/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accept_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 22:56:46 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 12:23:53 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		accept_color(const char *format, t_print *ssl)
{
	ssl->i += 1;
	if (format[ssl->i] != '\0')
	{
		if (format[ssl->i] == 'R' || format[ssl->i] == 'G' ||
		format[ssl->i] == 'B' || format[ssl->i] == 'E')
		{
			if (format[ssl->i + 1] == '}')
			{
				if (format[ssl->i] == 'R')
					ft_putendl(RED);
				else if (format[ssl->i] == 'G')
					ft_putendl(GREEN);
				else if (format[ssl->i] == 'B')
					ft_putendl(BLUE);
				else if (format[ssl->i] == 'E')
					ft_putendl(RESET);
				ssl->i += 2;
			}
		}
	}
	return (0);
}
