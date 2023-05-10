/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:49:46 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/10 12:39:45 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_integer(int nbr)
{
	long int	n;
	char		*str;
	int			len;

	n = nbr;
	str = ft_itoa_ut(n);
	len = ft_strlen(str);
	free(str);
	return (len);
}
