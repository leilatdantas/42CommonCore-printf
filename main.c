/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:48:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/10 13:05:06 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
// #include <limits.h>

#include<stdio.h>

int	main(void)
{
	int					*ponteiro;
	unsigned long long	nb;

	nb = 12;
	printf("\n\nUNSIGNED LONG LONG: %lu\nPONTEIRO: %lu\n\n", nb, sizeof(ponteiro));
	ft_printf ("isso é um inteiro: %d, isso é uma string: %s", 2147483648,
		"ola tudo bem?");
}
