#include "main.h"

/**
* _strcat - entry point
* @dest: string we want to concatenate
* @src: other string we want to concatenate
*
* Return: point to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int c = 0;

	while (dest[c])
	{
		c++;
	}
	while (*src)
	{
		dest[c]= *src;
		c++;
		src++;
	}
	return (dest);
}
