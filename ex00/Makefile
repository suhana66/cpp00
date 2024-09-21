# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: susajid <susajid@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 09:37:24 by susajid           #+#    #+#              #
#    Updated: 2024/09/21 12:24:47 by susajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone
CC := c++
CPPFLAGS := -Wall -Wextra -Werror

SRC := megaphone.cpp
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
