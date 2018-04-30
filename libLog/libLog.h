/*
** liblog.h for libmy_extended in /TIC-DEVC3/nguyen_v/libmy_extended
** 
** Made by NGUYEN Victoria
** Login   <nguyen_v@etna-alternance.net>
** 
** Started on  Wed Fev 22 13:00:50 2017 NGUYEN Victoria
** Last update Wed Fev 22 13:50:33 2017 NGUYEN Victoria
*/

#ifndef DEF_LIBLOG
#define DEF_LIBLOG

#include <unistd.h>
#include <stdio.h>

#define CNORM  "\x1B[0m"  		//regular
#define CERROR  "\x1B[31m" 		//error
#define CWARNING  "\x1B[33m" 	//warning
#define CINFO  "\x1B[32m" 		//info
#define CDEBUG  "\x1B[34m" 		//debug
#define TRUE	1
#define FALSE 	0
extern char* color_level[6];

typedef enum {ALL, WARNING, INFO, DEBUG, ERROR, NONE} LogLevel;

typedef struct s_Log
{
	char * 		filename;
	LogLevel 	logLevel;
	int 		inFile;

} t_Log;

extern t_Log shared_Log;

void 	my_putchar(char);
void   	my_putstr(char *);
void 	setupLog(char *, int, LogLevel);
void 	my_log(LogLevel, char *);
void 	writeInFile(char*);


#endif