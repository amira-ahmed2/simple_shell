#include "main.h"

/**
 ** _envCommand - that env the shell
 ** @commd: pointer to the string
 ** @st: status
 **/
void _envCommand(char **commd, int *st)
{
int num = 0;

while (environ[num])
{
	write(STDOUT_FILENO, environ[num], _strlen(environ[num]));
	write(STDOUT_FILENO, "\n", 1);
	num++;
}
freeArrStr(commd);
(*st) = 0;
}
