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
	if (c % 2 == 0)
	{
		for (i = 0; i <= c; i += 2)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; i <= c - 1; i += 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
