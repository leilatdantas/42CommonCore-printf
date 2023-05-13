/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:23:21 by lebarbos          #+#    #+#             */
/*   Updated: 2023/05/13 13:02:15 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *fmt, ...);

// Conversions: 
int		ft_convert_char(char c);
int		ft_convert_string(char *str);
int		ft_convert_integer(int nbr);
int		ft_convert_unsigned(unsigned int nbr);
int		ft_convert_hex(unsigned int nbr, char c);
int		ft_convert_pointer(unsigned long long address);

// Utilitaries:
char	*ft_itoa_ut(long int n);
void	ft_putnbr_base(unsigned long long nbr, char *base, int *i);

#endif
