##
## Makefile for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
## 
## Made by NGUYEN Victoria
## Login   <nguyen_v@etna-alternance.net>
## 
## Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
## Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
##

CC    =    gcc
CFLAGS    =    -Wall -Werror -Wextra
NAME    =    mylib.a
SRC=    ./libmy/my_aff_grid.c 	\
    ./libmy/my_strdup.c        	\
    ./libmy/isdigit.c        	\
    ./libmy/my_strcat.c        	\
    ./libmy/concat.c        	\
    ./libmy/my_strcmp.c        	\
    ./libmy/my_strcpy.c        	\
    ./libmy/my_getnbr.c        	\
    ./libmy/my_strlen.c        	\
    ./liblist/NewVector.c    \
    ./liblist/add_node.c    	\
    ./liblist/free.c        	\
    ./liblist/inList.c       \
    ./liblist/count.c        \
    ./LibParse/formatOpt.c	\
    ./LibParse/options.c 	\
    ./libLog/printLog.c		\
    ./libLog/setup.c		\
    ./liblog/writeInFile.c

OBJ=$(SRC:%.c=%.o)

all:    $(OBJ)

static_lib:    all
	ar -qc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re:    fclean all static_lib
