# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yawang <yawang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 16:09:25 by yawang            #+#    #+#              #
#    Updated: 2024/10/08 17:21:38 by yawang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = client.c server.c
		
OBJS = ${SRCS:%.c=%.o}

NAME = minitalk

CFLAGS = -Wall -Wextra -Werror
CC = cc

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -Ift_printf/libft -Ift_printf -c $? -o $@

${NAME}: server client

server:	server.o
		@make -C ft_printf/libft
		@make -C ft_printf
		${CC}  ${CFLAGS} $? -Lft_printf/libft -lft -Lft_printf -lftprintf -o server

client:	client.o
		@make -C ft_printf/libft
		@make -C ft_printf
		${CC}  ${CFLAGS} $? -Lft_printf/libft -lft -Lft_printf -lftprintf -o client

libft:
		make -C ft_printf/libft

printf:
		make -C ft_printf
			
clean:
		make clean -C ft_printf/libft
		make clean -C ft_printf
		rm -f ${OBJS}
	
fclean: clean
		rm -f server client 
		rm -f ft_printf/libftprintf.a ft_printf/libft/libft.a

re: fclean all

.PHONY: libft printf
