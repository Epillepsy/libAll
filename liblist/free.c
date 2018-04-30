/*
** free.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "fonction.h"

void 			free_vector(t_vector *self)
{
    t_vector  	*tmp;

    while (self != NULL)
    {
        tmp = self;
        self = self->next;
        free(tmp);
   	}
}
