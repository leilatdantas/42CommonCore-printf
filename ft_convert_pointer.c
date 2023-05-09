/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:18:50 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 18:18:00 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_pointer(unsigned long address)
{
	int	size_nbr;

	size_nbr = ft_countsize(address);
	ft_putstr_fd("0x", 1);
	ft_putnbr_base(address, "0123456789abcdef");
	return (size_nbr + 2);
}
