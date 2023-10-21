# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 11:03:40 by hlakhal-          #+#    #+#              #
#    Updated: 2023/10/21 18:35:48 by hlakhal-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

SRC = main.cpp  ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

CXXFLAGS = -Wall -Wextra -Werror

CXX = c++ -std=c++98

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all