/*
** main.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Fri Fev 03 13:00:50 2017 NGUYEN Victoria
** Last update Fri Fev 03 13:50:33 2017 NGUYEN Victoria
*/

#include "LibParse/parse.h"
#include "libLog/libLog.h"
#include "liblist/fonction.h"

int main(int argc, char **argv)
{
	my_setUpArrayPtr(); //setup le tableau de pointeur sur fonction pour les options  du parseur
	execOpt(return_opts(argc, argv));	//exectue les options
	setupLog(NULL, FALSE, ALL);	//setup la lib de log
	my_log(DEBUG, "coucou");  //log for fun
	my_log(WARNING, "coucou");
	my_log(ERROR, "coucou");
	my_log(INFO, "coucou");
	
	return (0);
}