/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:18:50 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/10 18:59:45 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_pointer(unsigned long long address)
{
	int	i;

	i = 0;
	if (address == 0)
		return(write(1, "(nil)", 5));
	ft_putstr_fd("0x", 1);
	ft_putnbr_base(address, "0123456789abcdef", &i);
	return (i + 2);
}
