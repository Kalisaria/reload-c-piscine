# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmeyer <dmeyer@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/06 17:16:09 by dmeyer            #+#    #+#              #
#    Updated: 2026/10/06 20:46:50 by dmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable
CC = cc
CFLAG = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ = $(SRC : .c=.o)
INCLUDE = stdlb.h
RM = rm -rf
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
#reglas
%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

all : $(NAME)


clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all crean fclean re