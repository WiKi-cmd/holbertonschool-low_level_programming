#include "main.h"

/**
* _memcpy - entry point
* @dest: memory area where the copy will be
* @src: memory area we want to copy
* @n: number of bytes from src we want to copy to dest
*
* Return: dest, where the memory was copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
