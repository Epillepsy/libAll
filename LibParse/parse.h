/*
** parse.h for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#ifndef __PARSE_H__
#define __PARSE_H__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../liblist/fonction.h"
#include "../libmy/libmy.h"
typedef struct s_arguments {

	char *name;
	char *value;
	char *concatenation;
	void (*method)(char *);
}	t_arguments;

typedef void (*fptr) (char*);
fptr ptrOptions[3];

t_vector 		*return_opts(int argc, char **argv);
int 		num_opt(char **argv);
void opt_v(char *);
void opt_c(char *);
void opt_verbose(char *);
int get_index(char* option);
void execOpt(t_vector *args);
t_arguments *createArgumentNode(int index);
void my_setUpArrayPtr();



#endif