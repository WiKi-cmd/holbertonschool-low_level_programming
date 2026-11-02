#include "main.h"

/**
* puts_half - entry point
* @str: string we want to print the last half of
*/
void puts_half(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
	{
		for (i = (c / 2); i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = ((c + 1) / 2); i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
