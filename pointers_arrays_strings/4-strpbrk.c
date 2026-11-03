#include "main.h"
#include <stddef.h>

/**
* _strpbrk - entry point
* @s: the string we search
* @accept: the string we based the search on
*
* Return: pointer to byte in s that matches one of the bytes in accept or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (s[i] == accept[j])
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
