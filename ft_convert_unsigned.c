/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:59:57 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 18:18:17 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_unsigned(unsigned int nbr)
{
	int	size_nbr;

	size_nbr = ft_countsize(nbr);
	ft_putnbr_base(nbr, "0123456789");
	return (size_nbr);
}
