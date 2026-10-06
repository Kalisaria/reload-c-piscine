# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/06 17:16:09 by dmeyer            #+#    #+#              #
#    Updated: 2026/10/06 22:51:30 by dmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable
CC = cc
CFLAG = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = ft_putstr.c ft_display_file.c
OBJ = $(SRC:.c=.o)
INCLUDE = ft_display_file.h
RM = rm -rf

$(NAME) : $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)
#reglas
%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

all: $(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re