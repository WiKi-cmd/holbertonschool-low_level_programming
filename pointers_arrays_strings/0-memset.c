#include "main.h"

/**
* _memset - entry point
* @s: memory area we want to modify
* @b: constant we want to put in the memory
* @n: number of bytes we want the constant to be in
*
* Return: pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
