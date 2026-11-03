#include "main.h"

/**
* _strncpy - entry point
* @dest: string where we copy the other inputed string
* @src: string we want to copy to dest
* @n: number max bytes we will copy from src to dest
*
* Return: pointer to the result dest string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
