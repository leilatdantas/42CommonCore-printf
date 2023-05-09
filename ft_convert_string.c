/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:48:09 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 18:18:15 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (ft_strlen(str));
}
