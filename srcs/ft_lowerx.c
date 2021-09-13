/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:17:00 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/10 15:20:12 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	ft_lowerx(long long converter)
{
	if (converter == 10)
		return ('a');
	if (converter == 11)
		return ('b');
	if (converter == 12)
		return ('c');
	if (converter == 13)
		return ('d');
	if (converter == 14)
		return ('e');
	if (converter == 15)
		return ('f');
	return (0);
}
