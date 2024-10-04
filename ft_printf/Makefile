# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yawang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 17:59:36 by yawang            #+#    #+#              #
#    Updated: 2023/12/25 13:33:14 by yawang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c print_char.c print_digit.c print_ptr.c print_str.c \
	print_unsigned_int.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libftprintf.a

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@make -C libft
	@cp ./libft/libft.a .
	@mv libft.a ${NAME}
	ar rcs ${NAME} ${OBJS}
	
clean:
	rm -f ${OBJS}
	@make clean -C libft

fclean: clean
	rm -f ${NAME}
	rm -f ./libft/libft.a
	
re:
	fclean all

.PHONY: all clean fclean re