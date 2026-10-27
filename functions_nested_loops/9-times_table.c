#include "main.h"

/**
* times_table - entry point
*/
void times_table(void)
{
	int i = 0;
	int j;
	int x;

	for (; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			x = j * i;
			if (x < 10 && j != 0)
			{
				_putchar(32);
				_putchar('0' + x);
			}
			else if (x < 10)
			{
				_putchar('0' + x);
			}
			else
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}
			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
