#include "main.h"


/**
* print_rev - entry point
* @s: string we want to print in reverse
*/
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = c; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
