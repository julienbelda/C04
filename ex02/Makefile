# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jul <jul@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/10 16:10:10 by jul               #+#    #+#              #
#    Updated: 2026/03/10 16:10:11 by jul              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := animals
SRC := main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
