/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:23:21 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/10 13:01:05 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h> 
# include <ctype.h> 
# include "libft/libft.h"

int		ft_printf(const char *fmt, ...);

// Conversions: 
int		ft_convert_char(char c);
size_t	ft_convert_string(char *str);
int		ft_convert_integer(int nbr);
int		ft_convert_unsigned(unsigned int nbr);
int		ft_convert_hex(int nbr, char c);
int		ft_convert_pointer(unsigned long long address);

// Utilitaries:
char	*ft_itoa_ut(long int n);
void	ft_putnbr_base(unsigned long long nbr, char *base, int *i);
int		ft_countsize(long int nbr);

#endif
