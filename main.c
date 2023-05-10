/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:48:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/10 18:41:19 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include<stdio.h>

int	main(void)
{
	int	*ptr;

	ptr = 0;
	printf("%p\n", ptr);
	ft_printf ("%p\n", ptr);
}
