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
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

char *displayPrompt(void);
void freeArrStr(char **arr);
char **tokenizerCommand(char *lne);
int _executeCommand(char **comt, char **argv, int idex);
void _exitCommand(char **comm, int *st);
void _envCommand(char **comm, int *st);
void callingExitOrEvn(char **commd, int *st);
int rebuilding(char *commd);

char *_getenv(char *nameVar);
char *grtPaths(char *comm);
void print_Errors(char *n, char *cmdd, int num);
void reverseToString(char *s, int length);
char *_itoaCoveInt(int num);
#endif
