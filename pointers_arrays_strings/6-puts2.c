#include "main.h"

/**
* puts2 - entry point
* @str: string we want to print every other character
* of starting with the first character
*/
void puts2(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
