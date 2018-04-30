/*
** setup.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Wed Fev 22 13:00:50 2017 NGUYEN Victoria
** Last update Wed Fev 22 13:50:33 2017 NGUYEN Victoria
*/

#include "libLog.h"

char* color_level[6] = {CNORM, CWARNING, CINFO, CDEBUG,CERROR, CNORM};
t_Log shared_Log = {.filename = "./journal.log", ALL};

void setupLog(char *filename, int inFile, LogLevel logLevel) {
	if (filename != NULL)
		shared_Log.filename = filename;
	shared_Log.inFile = inFile;
	shared_Log.logLevel = logLevel;
}