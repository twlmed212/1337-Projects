# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtawil <mtawil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 21:05:09 by mtawil            #+#    #+#              #
#    Updated: 2024/11/26 23:20:48 by mtawil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
	
NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC = src/ft_printf_utils.c src/ft_printf.c src/ft_putchar.c \
		src/ft_putnbr_base.c src/ft_putnbr.c src/ft_putstr.c \
		src/ft_strlen.c

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar -rc ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean re fclean