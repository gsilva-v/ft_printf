/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:45:33 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/14 10:45:34 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_whatprint(char s1, va_list args, int count);
int		ft_inttohex(unsigned long long n, int whatx);
char	ft_lowerx(long long converter);
char	ft_upperx(long long converter);
char	ft_checkhexa(long long converter, int whatx);

#endif
