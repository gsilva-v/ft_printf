/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:11:34 by gabriel           #+#    #+#             */
/*   Updated: 2021/10/05 13:24:52 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char	ft_upfive(int converter);

char	ft_checkhexa(long long converter, int whatx)
{
	if (converter == 0)
		return ('0');
	if (converter == 1)
		return ('1');
	if (converter == 2)
		return ('2');
	if (converter == 3)
		return ('3');
	if (converter == 4)
		return ('4');
	if (converter >= 5 && converter < 10)
		return (ft_upfive(converter));
	if (converter >= 10)
	{
		if (whatx == 0 || whatx == 2)
			return (ft_lowerx(converter));
		if (whatx == 1)
			return (ft_upperx(converter));
	}
	return (0);
}

static char	ft_upfive(int converter)
{
	if (converter == 5)
		return ('5');
	if (converter == 6)
		return ('6');
	if (converter == 7)
		return ('7');
	if (converter == 8)
		return ('8');
	if (converter == 9)
		return ('9');
	return (0);
}
