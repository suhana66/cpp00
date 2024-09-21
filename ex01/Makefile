# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 09:37:24 by susajid           #+#    #+#              #
#    Updated: 2024/09/21 12:24:52 by susajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := phonebook
CC := c++
CPPFLAGS := -Wall -Wextra -Werror

INCLUDE_DIR := include
SRC := src/main.cpp \
	src/Phonebook.cpp \
	src/Contact.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CPPFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
