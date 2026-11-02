#include "main.h"

/**
* _strcpy - entry point
* @src: string we want to copy
* @dest: buffer where the copy of src will be
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int c = 0;

	while (src[c] != '\0')
	{
		c++;
	}
	for (i = 0; i <= c; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
