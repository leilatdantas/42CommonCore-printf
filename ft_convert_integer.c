/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:49:46 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 18:18:10 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_integer(int nbr)
{
	char	*str;

	str = ft_itoa_ut(nbr);
	return (ft_strlen(str));
}
