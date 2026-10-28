#include "main.h"

/**
* print_number - function called in print_to_98()
* @n: number we want to print
*/
static void print_number(int n)
{
int u = n % 10;
int d = n / 10;

if (n < 0)
{
	_putchar(45);
	u = -u;
	d = -d;
}
if (d != 0)
{
	print_number(d);
}
_putchar('0' + u);
}

/**
* print_to_98 - entry point
* @n: number starting line
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			print_number(n);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			print_number(n);
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
