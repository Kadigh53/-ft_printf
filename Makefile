# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaoutem- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:15:46 by aaoutem-          #+#    #+#              #
#    Updated: 2022/11/04 15:59:56 by aaoutem-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = GCC

CFLAGS = -Wall -Wextra -Werror

FILES = ft_putnbr.c ft_putnbr_base.c ft_putstr.c ft_putchar.c ft_putaddress.c \
	 ft_printf.c ft_putunbr.c

OBJF = $(FILES:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJF)
	$(CC) $(CFLAGS) $(FILES) -c
	ar rc $(NAME) $(OBJF)

clean : $(OBJF)
	rm -rf $(OBJF)

fclean : clean
	rm -rf $(NAME)

re: fclean all
