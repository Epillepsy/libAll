/*
** fonction.h for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#ifndef __FONCTION_H__
# define __FONCTION_H__ 

#include <stdlib.h>
#include <unistd.h>

typedef struct 			s_vector
{
	void 				*data;
	int 				index;
	char 				type;
	struct 	s_vector 	*next;
}			t_vector;

t_vector	*push(t_vector *, t_vector *);

t_vector 	*NewVector(void *, char );

int       	count(t_vector *);

void	    free_vector(t_vector *);

void 		print(t_vector *);

t_vector 	*inListValue(t_vector *, void * );

t_vector 	*inListIndex(t_vector *, int );

int     	my_strcmp(char *, char *);

t_vector 	*NewEmptyVector();
#endif
