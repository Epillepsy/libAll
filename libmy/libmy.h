/*
** libmy.h for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#ifndef __LIBMY_H__
# define __LIBMY_H__

#include <stdlib.h>
#include <unistd.h>


int	exists(char *);

int	my_getnbr(char *);

int	my_strcmp(char *, char *);

char	*my_strcpy(char *, char *);

int	my_isdigit(char *);

char	*my_strdup(char *);

char	*my_concat(char *, char *);

int      my_strlen(char *);

char	*my_strcat(char *, char *);

void 	my_aff_grid(char **);

void 	my_putchar(char);

void 	my_putstr(char *str);
#endif
