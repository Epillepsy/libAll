/*
** my_strcmp.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "libmy.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i += 1;
    }
  if (s1[i] < s2[i])
    return (-1);
  if (s1[i]> s2[i])
    return (1);
  return (0);
}
