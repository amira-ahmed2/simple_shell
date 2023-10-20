#include "main.h"

/**
 * _executeCommand - executes a command
 * @comt: char car
 * @argv: char var
 * @idex: index
 * Return: value of input int
 */
int _executeCommand(char **comt, char **argv, int idex)
{
	pid_t childFork;
	int statu;
	char *fullPaths;

	fullPaths = grtPaths(comt[0]);
	if (!fullPaths)
	{
		print_Errors(argv[0], comt[0], idex);
		freeArrStr(comt);
		return (127);
	}
	childFork = fork();

	if (childFork == 0)
	{
		if (execve(comt[0], comt, environ) == -1)
		{
			free(fullPaths), fullPaths = NULL;
			freeArrStr(comt);
		}
	}
	else
	{
		waitpid(childFork, &statu, 0);
		freeArrStr(comt);
		free(fullPaths), fullPaths = NULL;
	}
	return (WEXITSTATUS(statu));
}
