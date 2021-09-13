/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:07:02 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/13 10:24:29 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_putnbr_fd(long int n)
{
	int lenint;
	long int nbr;
	
	lenint = 0;
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
	if (nbr > 0)
		lenint = 0;
	else
		lenint = 1;
	while (nbr != 0 )
	{
		lenint++;
		nbr = nbr / 10;
	}
	nbr = 0;
	return (lenint);
}
