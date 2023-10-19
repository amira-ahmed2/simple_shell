
#include "main.h"


/**
 * freeArrStr - free 2d array string
 * @arra: char ar
*/
void freeArrStr(char **arra)
{
int i;

if (!arra)
	return;

for (i = 0; arra[i]; i++)
{
free(arra[i]);
arra[i] = NULL;
}
free(arra);
arra = NULL;
}
