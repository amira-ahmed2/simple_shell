#include "main.h"

/**
 * displayPrompt -  reads the input string
 * Return: value of input string
 */
char *displayPrompt(void)
{
	char *strLine = NULL;
	size_t length = 0;
	ssize_t num;


	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	num = getline(&strLine, &length, stdin);
	if (num == -1)
	{
		free(strLine);
		return (NULL);
	}
	return (strLine);
}
