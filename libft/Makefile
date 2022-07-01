# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khovakim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 16:50:44 by khovakim          #+#    #+#              #
#    Updated: 2022/05/14 14:03:37 by khovakim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= $(shell find "." -name "*.c" ! -name "ft_lst*.c")
OBJS	= ${SRCS:.c=.o}
SRCS_B	= $(shell find "." -name "ft_lst*.c")
OBJS_B	= ${SRCS_B:.c=.o}
CC		= gcc
LIB		= ar rcs
CFLAGS	= -Wall -Werror -Wextra -I.
RM		= rm -f

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	${LIB} $(NAME) ${OBJS}

bonus : ${OBJS_B}
	${LIB} $(NAME) ${OBJS_B}

all : $(NAME)

clean :	
	${RM} ${OBJS} ${OBJS_B}


fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re
