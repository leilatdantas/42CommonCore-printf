/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ut.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:16:16 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/11 17:31:35 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  
DEF: Allocates (with malloc) and returns a string representing the integer
received as an argument. Negatives numbers must be handled. 
RETURN VALUE: The string representing the integer. NULL if the allocation
fails. 
*/

#include "ft_printf.h"
//#include <stdio.h>

void	ft_putnstr(long int n, char *str, int size)
{
	int	check;

	check = 0;
	str[size] = '\0';
	while (size > check)
	{
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
			check++;
		}
		else
		{
			str[size - 1] = (n % 10) + '0';
			n = n / 10;
			size--;
		}
	}
}

char	*ft_itoa_ut(long int n)
{
	char	*str;
	int		size;

	size = ft_countsize(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_putnstr(n, str, size);
	return (str);
}
