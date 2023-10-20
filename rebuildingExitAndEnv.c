#include "main.h"

/**
 * rebuilding - call is a funs exit or env
 * @commd: pointer to the string
 * Return: integer
 */
int rebuilding(char *commd)
{
char *buildsString[] = {"env", "exit", NULL};
int i = 0;

while (buildsString[i])
{
	/* code */
	if (_strcmp(commd, buildsString[i]) == 0)
		return (1);
	i++;
}
return (0);

}



/**
 * callingExitOrEvn - call is a funs exit or env
 * @commd: pointer to the string
 * @st: status
 */
void callingExitOrEvn(char **commd, int *st)
{
if (_strcmp(commd[0], "env") == 0)
{
	/* code */
	_envCommand(commd, st);
}
else if (_strcmp(commd[0], "exit") == 0)
{
	/* code */
	_exitCommand(commd, st);
}
}
