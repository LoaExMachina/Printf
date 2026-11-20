# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/29 13:27:26 by spitte            #+#    #+#              #
#    Updated: 2026/11/20 14:55:03 by spitte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_strlen.c ft_putchar.c findpower_base.c ft_putstr.c ft_putnbr_base.c ft_unsg_putnbr.c ft_printf.c
OFILES = $(CFILES:.c=.o)

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)



