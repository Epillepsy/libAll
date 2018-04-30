/*
** writeInFile.c for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Wed Fev 22 13:00:50 2017 NGUYEN Victoria
** Last update Wed Fev 22 13:50:33 2017 NGUYEN Victoria
*/

#include "libLog.h"
void writeInFile(char* message) {
  
  FILE *fp;

  if (!shared_Log.inFile)
  	return;
  fp = fopen(shared_Log.filename , "a" );
  fputs(message, fp );
  fputs("\n", fp );
  fclose(fp);
}