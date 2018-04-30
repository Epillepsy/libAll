/*
** myPutchar.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Wed Fev 22 13:00:50 2017 NGUYEN Victoria
** Last update Wed Fev 22 13:50:33 2017 NGUYEN Victoria
*/

#include "libLog.h"

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