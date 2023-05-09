/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:23:38 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 18:36:53 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	evaluate_fmt(const char *fmt, int i, va_list args)
{
	if (fmt[i] == 'c')
		return (ft_convert_char(va_arg(args, int)));
	else if (fmt[i] == 's')
		return (ft_convert_string(va_arg(args, char *)));
	else if (fmt[i] == 'd' || fmt[i] == 'i')
		return (ft_convert_integer(va_arg(args, int)));
	else if (fmt[i] == 'u')
		return (ft_convert_unsigned(va_arg(args, unsigned int)));
	else if (ft_tolower(fmt[i]) == 'x')
		return (ft_convert_hex(va_arg(args, unsigned int), fmt[i]));
	else if (fmt[i] == 'p')
		return (ft_convert_pointer(va_arg(args, unsigned long)));
	else if (fmt[i] == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		ret;
	va_list	args;

	ret = 0;
	i = 0;
	va_start(args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			ret += evaluate_fmt(fmt, i + 1, args);
			i++;
		}
		else
		{
			ft_putchar_fd(fmt[i], 1);
			ret++;
		}
		i++;
	}
	va_end (args);
	return (ret);
}
