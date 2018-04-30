/*
** my_aff_grid.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "libmy.h"

void	my_aff_grid(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i] != '\0')
    {
      while (tab[i][j] != '\0')
	{
	  my_putchar(tab[i][j]);
	  j++;
	}
      j = 0;
      my_putchar('\n');
      i++;
    }
}
