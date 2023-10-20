#include "main.h"
/**
 * grtPaths- get path direction
 * @comm : commind
 * Return: path
 */
char *grtPaths(char *comm)
{
	int i;
	char *path, *fullPath, *dicrect;
	struct stat statt;

	for (i = 0; comm[i]; i++)
	{
		if (comm[i] == '/')
		{
			if (stat(comm, &statt) == 0)
				return (_strdup(comm));
			else
				return (NULL);
		}
	}
	path = _getenv("PATH");
	if (!path)
	return (NULL);
	dicrect = strtok(path, ":");
	while (dicrect)
	{
		fullPath = malloc(_strlen(dicrect) + _strlen(comm) + 2);
		if (fullPath)
		{
			_strcpy(fullPath, dicrect);
			_strcat(fullPath, "/");
			_strcat(fullPath, comm);
			if (stat(fullPath, &statt) == 0)
			{
				free(path);
				return (fullPath);
			}
			free(fullPath), fullPath = NULL;
			dicrect = strtok(NULL, ":");
		}
	}
	free(path);
	return (NULL);
}
