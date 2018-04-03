# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchiche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 18:52:46 by dchiche           #+#    #+#              #
#    Updated: 2017/11/07 19:03:39 by dchiche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

all : $(NAME)

$(NAME) : compile
	gcc -o $(NAME) $(NAME).o

compile :
	gcc -c $(NAME).c

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
