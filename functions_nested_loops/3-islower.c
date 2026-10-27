#include "main.h"

/**
* _islower - entry point
* @c: the int to print
*
* Return: 1 if lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
