#include "variadic_functions.h"

/**
* sum_them_all - entry point
* @n: number of parameters
*
* Return: sum of the parameters or 0 if n = 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i = 0;

	va_start(ap, n);
	for (; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
