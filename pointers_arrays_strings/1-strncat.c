#include "main.h"

/**
* _strncat - entry point
* @dest: string we want to concatenate
* @src: other string we want to concatenate
* @n: number of bytes we want from src to concatenate into dest
*
* Return: pointer to the resultin dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int c2 = 0;

	while (dest[c])
	{
		c++;
	}
	while (src[c2])
	{
		if (c2 < n)
		{
			dest[c] = src[c2];
		}
		c++;
		c2++;
	}
	return (dest);
}
