# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/26 16:37:37 by grass-kw          #+#    #+#              #
#    Updated: 2016/07/23 17:02:09 by grass-kw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




CC=gcc
CFLAGS=-Wall -Werror -Wextra -I./includes
NAME= libbtree.a
FILES=  btree_new.c \

OBJ=$(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
