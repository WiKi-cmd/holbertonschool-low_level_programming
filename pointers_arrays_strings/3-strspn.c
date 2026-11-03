#include "main.h"

/**
* _strspn - entry point
* @s: string we want the length (in bytes) of a prefix substring
* @accept: substring we use to determine that number
*
* Return: the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != accept[j])
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i + 1);
}
