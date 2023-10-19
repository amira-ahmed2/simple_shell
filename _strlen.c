#include "main.h"

/**
 ** _strlen - it gives the length of a string
 ** @s: pointer to the string
 ** Return: the length of string
 **/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	
	return (len);
}
