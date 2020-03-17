/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa8.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 22:25:52 by avenonat          #+#    #+#             */
/*   Updated: 2019/12/03 12:35:44 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa8(__int128_t n)
{
	char				*itog;
	long int			i;
	__int128_t			pow;
	int					j;

	i = 1;
	pow = 1;
	while ((n / pow / 10) != 0 && ++i)
		pow = pow * 10;
	if (!(itog = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (pow != 0)
	{
		j = n / pow;
		itog[i++] = (char)((int)j + '0');
		n = n % pow;
		pow = pow / 10;
	}
	itog[i++] = '\0';
	return (itog);
}
