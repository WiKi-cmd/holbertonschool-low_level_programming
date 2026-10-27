#include "main.h"

/**
* jack_bauer - entry point
*/
void jack_bauer(void)
{
	int i = 0;
	int j;

	for (; i < 24; i++)
	{
		j = 0;
		for (; j < 60; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
