# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 13:31:42 by lebarbos          #+#    #+#              #
#    Updated: 2023/05/09 19:06:29 by lebarbos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

LIB		= ar -rcs

RM		= rm -f

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_printf_utils.c ft_itoa_ut.c ft_convert_unsigned.c \
			ft_convert_string.c ft_convert_pointer.c ft_convert_integer.c \
			ft_convert_hex.c ft_convert_char.c ft_putnbr_base.c

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C libft
			cp libft/libft.a $(NAME)
			$(LIB) $(NAME) $(OBJS)
			
%.o: %.c	
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			make clean -C libft
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			make fclean -C libft
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re rebonus
