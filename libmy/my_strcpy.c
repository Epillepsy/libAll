/*
** mystrcpy.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "libmy.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (*(src + i))
    {
      *(dest + i) = *(src + i);
      i++;
    }
  return (dest);
}
