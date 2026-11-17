#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - entry point
* @separator: string printed between strings
* @n: numbers of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, n);
	for (; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
