#include "3-calc.h"

/**
* op_add - entry point
* @a: integer we want to add
* @b: integer we add to a
*
* Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - entry point
* @a: integer we want to substract
* @b: integer we substract to a
*
* Return: substraction of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - entry point
* @a: integer we want to multiply
* @b: other integer we multiply with
*
* Return: multiplication of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - entry point
* @a: integer we want divided
* @b: integer we use to divide
*
* Return: division of a by b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - entry point
* @a: integer we want divided
* @b: integer we use to divide
*
* Return: remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
