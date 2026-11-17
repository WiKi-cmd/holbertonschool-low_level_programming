#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - entry point
* @separator: string to print between numbers
* @n: number of parameters to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
			else
			{
				printf("%d", va_arg(ap, int));
			}
		}
		else
		{
			printf("%d\n", va_arg(ap, int));
		}
	}
	va_end(ap);
}
