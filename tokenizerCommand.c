
#include "main.h"

/**
 * tokenizerCommand - splits a commant string
 * @lne: one string
 * Return: value of char
 */
char **tokenizerCommand(char *lne)
{
	char *tokens = NULL, *temp = NULL, del[] = {" \t\n"};
	char **commint = NULL;
	int i = 0, cpt = 0;

if (!lne)
	return (NULL);

temp = _strdup(lne);
tokens = strtok(temp, del);

if (tokens == NULL)
{
	free(lne), lne = NULL;
	free(temp), temp = NULL;
	return (NULL);
}
while (tokens)
{
	cpt++;
	tokens = strtok(NULL, del);
}
free(temp), temp = NULL;
commint = malloc(sizeof(char *) * (cpt + 1));
if (!commint)
{
	free(lne), lne = NULL;
	return (NULL);
}
tokens = strtok(lne, del);
while (tokens)
{
	commint[i] = _strdup(tokens);
	tokens = strtok(NULL, del);
	i++;
}
free(lne), lne = NULL;
commint[i] = NULL;
return (commint);
}
