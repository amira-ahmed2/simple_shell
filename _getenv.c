#include "main.h"
/**
 * _getenv - function that gets an environment variable.
 * @nameVar: char variable
 * Return: value of input char
 */
char *_getenv(char *nameVar)
{
	int i;
	char *temp, *key, *value, *path;

	for (i = 0; environ[i]; i++)
	{
		temp = _strdup(environ[i]);
		key = strtok(temp, "=");
		if (_strcmp(key, nameVar) == 0)
		{
			/* code */
			value = strtok(NULL, "\n");
			path = _strdup(value);
			free(temp);
			return (path);
		}
		free(temp), temp = NULL;
	}
	return (NULL);
}
