#include <stdio.h>

/**
* main - entry point
*
* Return: always 0 for success
*/
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		if (i < 58 || 96 < i)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
