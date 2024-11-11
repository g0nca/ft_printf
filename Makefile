# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggomes-v <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 14:10:40 by marvin            #+#    #+#              #
#    Updated: 2024/11/11 14:10:40 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_hexadecimal.c

NAME = libftprintf.a
PRIC = ar rcs
RM = rm -f 
OBJS = $(SRCS:.c=.o)
${NAME}:${OBJS}
		${PRIC} ${NAME} ${OBJS}
%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@
	
all:${NAME}
clean:
		${RM} ${OBJS}
fclean: clean
		%{RM} ${NAME}
re: fclean all
.PHONY : all clean fclean re