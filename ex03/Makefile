# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aziyani <aziyani@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 18:16:48 by aziyani           #+#    #+#              #
#    Updated: 2023/09/26 19:00:48 by aziyani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphim

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = AMateria.cpp Character.cpp  Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

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