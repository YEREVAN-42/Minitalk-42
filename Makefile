# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khovakim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 12:26:32 by khovakim          #+#    #+#              #
#    Updated: 2022/07/01 11:25:38 by khovakim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Minitalk
SRCS	=	$(wildcard ./src/*.c)
OBJS	=	$(patsubst ./src/%.c, ./src/%.o, $(SRCS))
CC		=	gcc
INCLUDE	=	./libft
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f
LINKER	=	-L$(INCLUDE) -lft

.c.o :
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

all :	$(NAME)

$(NAME) : $(OBJS)
	$(MAKE) -C $(INCLUDE)
	$(CC) $(CFLAGS) -I $(INCLUDE) $(LINKER) ./src/client.o -o client
	$(CC) $(CFLAGS) -I $(INCLUDE) $(LINKER) ./src/server.o -o server

clean :
	$(MAKE) clean -C $(INCLUDE)
	$(RM) $(OBJS)

fclean :	clean
	$(MAKE) fclean -C $(INCLUDE)
	$(RM) 	client server

re : fclean all

.PHONY :	all clean fclean re
