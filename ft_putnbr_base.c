/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:08:10 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 17:17:53 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size(char *b)
{
	int	s;

	s = 0;
	while (b[s] != '\0')
		s++;
	return (s);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
		nbr = nbr % base_len;
	}
	ft_putchar_fd(base[nbr], 1);
}
