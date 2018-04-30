##
## Makefile for libmy_extended in /TIC_DEVC/nguyen_v/libmy_extended
## 
## Made by NGUYEN Victoria
## Login   <nguyen_v@etna-alternance.net>
## 
## Started on  Fri Fev 03 14:05:05 2017 NGUYEN Victoria
## Last update Fri Fev 03 14:59:40 2017 NGUYEN Victoria
##

CC	=	gcc
LM_SRC	=	concat.c	\
		isdigit.c	\
		my_getnbr.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c 	\
		my_strlen.c
LM_OBJ	= 	$(LM_SRC:%.c=%.o)
LM_NAME	=	libmy.a

all:	$(LM_OBJ)
	$(CC) -c $(LM_SRC)
	ar r libmy.a $^
	ranlib libmy.a
clean:
	rm -f $(LM_OBJ)

fclean: clean
	rm -f $(LM_NAME)

re: fclean all

.PHONY: all clean fclean re
