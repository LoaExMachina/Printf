# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/29 13:27:26 by spitte            #+#    #+#              #
#    Updated: 2026/11/14 14:41:03 by spitte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_strlen.c ft_putchar_fd.c ft_putstr_fd.c isbasevalid.c ft_putnbr_base.c ft_unsg_putnbr.c
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



