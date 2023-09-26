# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 20:39:52 by aziyani           #+#    #+#              #
#    Updated: 2023/09/24 16:36:04 by aziyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# functions allow up to override methods in sublasses so for example let's say we've two classes A and B, B is derived from K many would be the subclass of A,
# if we create a method in the A class and marceters virtual we have the opotion of overriding that method in the B class to get to do something else.

NAME = polymorphim

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ = $(SRC:%.cpp=%.o)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all