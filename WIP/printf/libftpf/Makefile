# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 22:13:22 by echung            #+#    #+#              #
#    Updated: 2021/03/15 00:27:37 by echung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CFLAGS	= -Wall -Wextra -Werror -I. -c
SRCS	= ft_atoi.c \
		  ft_strlen.c \
		  ft_strchr.c \
		  ft_bzero.c \
		  ft_memset.c \
		  ft_memcpy.c \
		  ft_putchar_fd.c \
		  ft_putnbr_fd.c \
		  ft_putnbr_fd_lx.c \
		  ft_putnbr_fd_p.c \
		  ft_putnbr_fd_sx.c \
		  ft_putnbr_fd_u.c \
		  ft_printf.c

OBJS	= $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

#$(NAME): $(OBJS)
#	gcc -o $@ $^

#$(OBJS) : $(SRCS)
#	gcc -c $< -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
