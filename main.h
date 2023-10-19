#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>


extern char **environ;

int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *displayPrompt(void);
void freeArrStr(char **arr);
char **tokenizerCommand(char *lne);
int _executeCommand(char **comt, char **argv);


#endif
