/*
** NewVector.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "fonction.h"
 

t_vector *NewVector(void* data, char type)
{
	t_vector *newNode;

	if ((newNode = malloc(sizeof(*newNode))))
	{
		newNode->next = NULL;
		newNode->data = data;
		newNode->index = 0;
		newNode->type = type;
		return (newNode);
	}
	return (NULL);
}

t_vector *NewEmptyVector()
{
	t_vector *newNode;

	if ((newNode = malloc(sizeof(*newNode))))
	{
		newNode->next = NULL;
		newNode->index = 0;
		return (newNode);
	}
	return (NULL);
}
