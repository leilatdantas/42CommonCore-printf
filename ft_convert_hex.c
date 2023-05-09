/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:27:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 18:18:03 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_hex(unsigned int nbr, char c)
{
	int	size_nbr;

	size_nbr = ft_countsize(nbr);
	ft_putstr_fd("0x", 1);
	if (c == 'x')
		ft_putnbr_base(nbr, "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(nbr, "0123456789ABCDEF");
	return (size_nbr + 2);
}
