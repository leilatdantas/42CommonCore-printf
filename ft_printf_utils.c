/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:09 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/08 14:02:27 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Utilirary functions that returns the size of the content to be printed.
*/

#include "printflibft.h"
#include "libft"

int	ft_putchar_ut(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putstr_ut(char *s)
{
	ft_putstr_fd(s, 1);
}

