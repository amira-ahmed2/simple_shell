#include "main.h"

/**
 * _executeCommand - executes a command
 * @comt: char car
 * @argv: char var
 * Return: value of input int
 */
int _executeCommand(char **comt, char **argv)
{
pid_t childFork;
int statu;
childFork = fork();

if (childFork == 0)
{
	if (execve(comt[0], comt, environ) == -1)
	{
		/* code*/
		perror(argv[0]);
		freeArrStr(comt);
		exit(127);
	}
}
else
{
	waitpid(childFork, &statu, 0);
	freeArrStr(comt);
}
return (WEXITSTATUS(statu));

}
