/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:07:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/10/05 12:46:28 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_lenint(long int n)
{
	int	lenint;

	if (n > 0)
		lenint = 0;
	else
		lenint = 1;
	while (n != 0 )
	{
		lenint++;
		n = n / 10;
	}
	n = 0;
	return (lenint);
}

int	ft_putnbr(long int n)
{
	long int	nbr;

	nbr = n;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	return (ft_lenint(nbr));
}
