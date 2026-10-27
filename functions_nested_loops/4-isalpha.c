#include "main.h"

/**
* _isalpha - entry point
* @c: the int to print
*
* Return: 1 if lowercase or uppercase, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
