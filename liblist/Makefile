##
## Makefiles for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
## 
## Made by NGUYEN Victoria
## Login   <nguyen_v@etna-alternance.net>
## 
## Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
## Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
##

CFLAGS 		?= -W -Wall -Werror -fPIC
CC		= gcc
RM		= rm -f
STAT		= libvector.a
DYNA		= libvector.so
NAME		= vector
SRC		= 	add_node.c 	\
			count.c 	\
			free.c 		\
			inList.c 	\
			NewVector.c
OBJ		= $(SRC:%.c=%.o)

all: vector_static vector_dynamic ## Default rule to create the program

clean: ## Removes objects files
	$(RM) $(OBJ)

fclean: clean ## Removes objects files and executable file
	$(RM) $(NAME) $(STAT) $(DYNA)

re: fclean all ## Rebuild Project

vector_static: $(OBJ) ## Creates static library (.a)
	ar rcs $(STAT) $^

vector_dynamic: $(OBJ) ## Creates dynamic library (.so)
	$(CC) -shared -o $(DYNA) $^

.PHONY: all help re vector_static vector_dynamic clean fclean