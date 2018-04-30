/*
** my_strcat.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "libmy.h"

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (*(str1+i) != '\0')
    i++;
  while (*(str2+j) != '\0')
    {
      *(str1+i) = *(str2+j);
      i++;
      j++;
    }
  return (str1);
}

void my_putchar(char c)
{
  write(1, &c,  1);
}

void       my_putstr(char *str)
{
   int       j;

   j = 0;
   while (str[j] != '\0')
     {
       my_putchar(str[j]);
       j++;
     }
}