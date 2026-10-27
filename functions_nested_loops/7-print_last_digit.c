#include "main.h"

/**
* print_last_digit - entry point
* @n: number we need the last digit of
*
* Return: last digit of number n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}
	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
