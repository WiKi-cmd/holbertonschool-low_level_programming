#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0 for success
*/
int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; i < 91; i++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
