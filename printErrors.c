#include "main.h"
/**
 * print_Errors - print_Errors.
 * @num: the integer
 * @n: name
 * @cmdd: command
*/
void print_Errors(char *n, char *cmdd, int num)
{
	char *idx;

	char massege[] = ": not found\n";

	idx = _itoaCoveInt(num);

	write(STDERR_FILENO, n, _strlen(n));
	write(STDERR_FILENO, ":", 2);
	write(STDERR_FILENO, idx, _strlen(idx));
	write(STDERR_FILENO, ":", 2);
	write(STDERR_FILENO, cmdd, _strlen(cmdd));
	write(STDERR_FILENO, massege, _strlen(massege));
	free(idx);
}
/**
 * _itoaCoveInt - coverts the integer n into a character string.
 * @num: the integer
 * Return: character string
*/
char *_itoaCoveInt(int num)
{
	char buf[20];
	int i;

	i = 0;
	if (num == 0)
	{
	buf[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			/* code */
			buf[i++] = (num % 10) + '0';
			num /= 10;
		}
	}
	buf[i] = '\0';
	reverseToString(buf, i);
	return (_strdup(buf));
}
/**
 * reverseToString - prints a string in reverse.
 * @s: the pointer letters string
 * @length: length
*/
void reverseToString(char *s, int length)
{
	char temp;
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
	end--;
	}
}
