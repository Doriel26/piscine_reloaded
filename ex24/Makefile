# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchiche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 15:38:50 by dchiche           #+#    #+#              #
#    Updated: 2017/11/07 16:22:49 by dchiche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDES = includes/libft.h

all : $(NAME)

$(NAME) : compile
	ar rsc $(NAME) *.o

compile : 
	gcc -I $(INCLUDES) -c $(SRCS)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
