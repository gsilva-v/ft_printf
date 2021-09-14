/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:07:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/14 10:49:54 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

int	ft_putnbr_fd(long int n)
{
	long int	nbr;

	nbr = n;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648");
	else if (n < 0)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(-n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd(n + 48);
	else
	{
		ft_putnbr_fd(n / 10);
		ft_putchar_fd(n % 10 + 48);
	}
	return (ft_lenint(nbr));
}
