/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:39:56 by gabriel           #+#    #+#             */
/*   Updated: 2021/10/05 12:56:13 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int			i;
	static int	count;
	va_list		args;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = ft_whatprint(s[i], args, count);
		}
		else
		{
			write(1, &s[i], 1);
			count ++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	ft_whatprint(char s1, va_list args, int count)
{
	if (s1 == 'c')
		count += ft_putchar(va_arg(args, int));
	if (s1 == 's')
		count += ft_putstr(va_arg(args, char *));
	if (s1 == 'p')
	{
		count += 2;
		count += ft_inttohex(va_arg(args, unsigned long int ), 2);
	}
	if (s1 == 'd' || s1 == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (s1 == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	if (s1 == 'x')
		count += ft_inttohex(va_arg(args, unsigned int), 0);
	if (s1 == 'X')
		count += ft_inttohex(va_arg(args, unsigned int), 1);
	if (s1 == '%')
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}
