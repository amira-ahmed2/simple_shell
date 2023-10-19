#include "main.h"

/**
 * main - reads the input string
 * @argc: length arr
 * @argv: array
 * Return: value of input int
 */
int main(int argc, char **argv)
{

char *line = NULL;
int status = 0;
char **commt = NULL;
(void) argc;

while (1)
{
	line = displayPrompt();
/*You have to handle the “end of file”condition (Ctrl+D)*/

	if (line == NULL)
		{
		if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
		return (status);
		}


	commt = tokenizerCommand(line);
	if (!commt)
		continue;

	status = _executeCommand(commt, argv);
}
}
