#include "main.h"

/**
* _strlen - entry point
* @s: string we want the length of
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
