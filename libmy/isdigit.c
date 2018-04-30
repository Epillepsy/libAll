/*
** isdigit.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "libmy.h"

int	my_isdigit(char *c)
{
  int	i;

  i = 0;
  while (c[i] != '\0')
    {
      if ((c[i] < '0') || (c[i]  > '9'))
	return (-1);
      i++;
    }
  return (0);
}
