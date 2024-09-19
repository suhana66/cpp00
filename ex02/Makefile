# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 21:54:53 by susajid           #+#    #+#              #
#    Updated: 2024/09/19 22:02:23 by susajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := account
CC := c++
CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := Account.cpp tests.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
