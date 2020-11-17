##
## EPITECH PROJECT, 2019
## CPool_Day11_2019
## File description:
## Makefile for the lib
##

NAME	=	libmy.a

SRCS	=   	my_compute_power_rec.c  	\
		my_compute_square_root.c	\
		my_find_prime_sup.c     	\
		my_getnbr.c             	\
		my_isneg.c              	\
		my_is_prime.c           	\
		my_putchar.c            	\
		my_put_nbr.c            	\
		my_putstr.c             	\
		my_revstr.c             	\
		my_showmem.c            	\
		my_showstr.c            	\
		my_show_word_array.c    	\
		my_sort_int_array.c     	\
		my_strcapitalize.c      	\
		my_strcat.c             	\
		my_strcpy.c             	\
		my_str_isalpha.c        	\
		my_str_islower.c        	\
		my_str_isnum.c          	\
		my_str_isprintable.c    	\
		my_str_isupper.c        	\
		my_strlen.c             	\
		my_strlowcase.c         	\
		my_strncat.c            	\
		my_strncpy.c            	\
		my_strstr.c             	\
		my_strupcase.c          	\
		my_swap.c

RM	=	rm -f

OBJ	=	$(SRCS:.c=.o)

CC	=	gcc

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -c $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
		cp ./$(NAME) ../
		cp ./my.h ../../include

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
