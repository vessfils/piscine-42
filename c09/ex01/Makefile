# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 22:52:57 by jcampagn          #+#    #+#              #
#    Updated: 2021/08/23 18:26:00 by jcampagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
.c.o:

			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
				ar rc ${NAME} ${OBJS}
				ranlib ${NAME}
clean :
				rm -f ${OBJS}
fclean : clean
				rm -f ${NAME}
re : fclean all

.PHONY: all clean fclean re
