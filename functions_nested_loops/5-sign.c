#include "main.h"

/**
* print_sign - entry point
* @n: the int to analyze
*
* Return: 1 if n positive, 0 if n is zero and -1 if n negative
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
