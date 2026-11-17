#include "variadic_functions.h"
#include <stdio.h>

/**
* print_char - entry point
* @va_list: argument list from which we take the argument to print
* @separator: separator to print between arguments we print
*/
void print_char(va_list ap, char *separator)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
* print_int - entry point
* @va_list: argument list from which we take the argument to print
* @separator: separator to print between arguments we print
*/
void print_int(va_list ap, char *separator)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
* print_float - entry point
* @va_list: argument list from which we take the argument to print
* @separator: separator to print between arguments we print
*/
void print_float(va_list ap, char *separator)
{
	printf("%s%f",separator, va_arg(ap, double));
}

/**
* print_string - entry point
* @va_list: argument list from which we take the argument to print
* @separator: separator to print between arguments we print
*/
void print_string(va_list ap, char *separator)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s%s", separator, s);
}

/**
* print_all - entry point
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j;
	char *separator = "";
	pfunc func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (func[j].type)
		{
			if (format[i] == func[j].type)
			{
				func[j].f(ap, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
