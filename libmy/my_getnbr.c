/*
** my_getnbr.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "libmy.h"

int	my_getnbr(char *str)
{
  int	i;
  int	res;
  int	test;
  int	sign;

  sign = 1;
  test = 0;
  res = 0;
  i = 0;
  while (*(str + i) != '\0')
    {
      if (*(str + i) - '0' <= 9 && *(str + i) - '0' >= 0 && test == 0)
	res = res * 10 + *(str + i) - '0';
      else if (*(str + i) == 45)
	sign *= -1;
      else
	test = 1;
      i++;
    }
  return (res * sign);
}
