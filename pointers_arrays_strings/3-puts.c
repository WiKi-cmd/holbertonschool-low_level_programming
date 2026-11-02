#include "main.h"

/**
* _puts - entry point
* @str: string we want to print in stdout
*/
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
