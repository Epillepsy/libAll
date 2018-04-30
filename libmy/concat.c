/*                                                                                                                                                                                       
** concat.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended                                                                                                                    
**                                                                                                                                                                                       
** Made by NGUYEN Victoria                                                                                                                                                               
** Login   <nguyen_v@etna-alternance.net>                                                                                                                                                
**                                                                                                                                                                                       
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria                                                                                                                                  
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria                                                                                                                                  
*/

#include "libmy.h"

char	*my_concat(char *s1, char *s2)
{
  char	*res;

  res = malloc(my_strlen(s1) + my_strlen(s2) + 10 * sizeof(char));
  if (res != NULL)
    {
      my_strcpy(res, s1);
      my_strcat(res, s2);
    }
  return (res);
}
