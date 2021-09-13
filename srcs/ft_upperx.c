/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:16:46 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/10 15:19:54 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	ft_upperx(long long converter)
{
	if (converter == 10)
		return ('A');
	if (converter == 11)
		return ('B');
	if (converter == 12)
		return ('C');
	if (converter == 13)
		return ('D');
	if (converter == 14)
		return ('E');
	if (converter == 15)
		return ('F');
	return (0);
}
