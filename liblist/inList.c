/*
** inList.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "fonction.h"

t_vector *inListValue(t_vector *self, void * data)
{
	while (self != NULL)
	{
		if (self->data == data)
			return (self);
		self = self->next;
	}
	return(NULL);
}

t_vector *inListIndex(t_vector *self, int index)
{
	while (self != NULL)
	{
		if (self->index == index)
			return (self);
		self = self->next;
	}
	return(NULL);
}
