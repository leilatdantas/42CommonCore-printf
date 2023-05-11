/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:48:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/11 17:00:56 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char			c;
	char			*str;
	int				integer;
	unsigned int	uns_int;
	unsigned int	hex;
	void			*ptr;

	c = 0;
	str = 0;
	integer = 0;
	uns_int = 0;
	hex = 0;
	ptr = 0;
	ft_printf("\nft_printf:\n");
	ft_printf("Char: %c\nString: %s\nInteger %%d: %d\nInteger %%i: %i\nUnsigned Integer: %u\nHexadecimal x: %x\nHexadecimal X: %X\nPointer: %p\n\n", c, str, integer, integer, uns_int, hex, hex, ptr);
	printf("printf:\n");
	printf("Char: %c\nString: %s\nInteger %%d: %d\nInteger %%i: %i\nUnsigned Integer: %u\nHexadecimal x: %x\nHexadecimal X: %X\nPointer: %p\n\n", c, str, integer, integer, uns_int, hex, hex, ptr);
}
