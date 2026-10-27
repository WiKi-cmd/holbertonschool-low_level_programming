#include "main.h"

/**
* _abs - entry point
*@n: the number of which we want the absolute value
*
*Return: the absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
