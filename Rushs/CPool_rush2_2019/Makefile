##
## EPITECH PROJECT, 2019
## rush2
## File description:
## Makefile to make a lib
##

NAME	=	rush2

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		rush2.c	

CC	=	gcc

CPPFLAGS	=	-I./include/

HEADER 	= 	my.h

CFLAGS 	=	-W -Wall

DEFLAGS	=	-W -Wextra -Wall -g3

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

debug:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: 	all debug clean fclean re
