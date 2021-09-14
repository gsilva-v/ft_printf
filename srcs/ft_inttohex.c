/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttohex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 14:37:19 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/14 10:33:19 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_hexlen(unsigned long n)
{
	int	len;

	len = 1;// quando o valor for menor que 16 nao tera mais como dividir, mas teremos que ter esse valor para alocação
	while (n >= 16)
	{
		++len;
		n = n / 16;
	}
	return (len);
}

static char	*ft_convtohex(char *hex, int len, unsigned long int n, int whatx)
{
	unsigned long int	converter;

	converter = 0;
	while (n != 0)
	{	
		converter = n % 16;
		hex[len--] = ft_checkhexa(converter, whatx);
		n = n / 16;
	}
	return (hex);
}

int	ft_inttohex(unsigned long long n, int whatx)
{
	int			len;
	static char	*hex;

	len = ft_hexlen(n);
	hex = ft_calloc(sizeof(char), (len + 1));
	if (n == 0)
		hex[len - 1] = '0';
	hex = ft_convtohex(hex, len - 1, n, whatx);
	if (whatx == 2)
	{
		if (hex[len - 1] == '0' && len - 1 == 0)
			ft_printf("%s", "0x0");
		else
			ft_printf("0x%s", hex);
	}
	else
		ft_printf("%s", hex);
	free(hex);
	hex = NULL;
	return (len);
}
