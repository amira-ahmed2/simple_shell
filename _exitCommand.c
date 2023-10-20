#include "main.h"

/**
 ** _exitCommand - that exits the shell
 ** @commd: pointer to the string
 ** @st: status
 **/
void _exitCommand(char **commd, int *st)
{
	freeArrStr(commd);
	exit(*st);
}
