#include "main.h"

/**
* _isdigit - entry point
* @c: character to check
*
* Return: 1 if c is a digit otherwise 0
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
