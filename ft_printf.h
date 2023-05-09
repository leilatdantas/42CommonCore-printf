/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:23:21 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/09 18:17:22 by lebarbos         ###   ########.fr       */
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

int	ft_printf(const char *fmt, ...);

// Conversions: 
int	ft_convert_char(char c);
int	ft_convert_string(char *str);
int	ft_convert_integer(int nbr);
int	ft_convert_unsigned(unsigned int nbr);
int	ft_convert_hex(unsigned int nbr, char c);
int	ft_convert_pointer(unsigned long address);

// Utilitaries:
char	*ft_itoa_ut(int n);
void	ft_putnbr_base(int nbr, char *base);
int	ft_countsize(int nbr);

#endif
