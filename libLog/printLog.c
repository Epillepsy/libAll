/*
** printLog.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Wed Fev 22 13:00:50 2017 NGUYEN Victoria
** Last update Wed Fev 22 13:50:33 2017 NGUYEN Victoria
*/

#include "libLog.h"

void my_log(LogLevel logLevel, char * message) {
	writeInFile(message);
	if (logLevel >= shared_Log.logLevel && logLevel < 5 && logLevel > 0) {
		my_putstr(color_level[logLevel]);
		my_putstr(message);
		my_putchar('\n');
		my_putstr(CNORM);
	}
}