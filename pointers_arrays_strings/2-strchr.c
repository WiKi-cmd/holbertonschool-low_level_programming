#include "main.h"
#include <stddef.h>

/**
* _strchr - entry point
* @s: string we will search
* @c: character we are looking
*
* Return: pointer to the first occurence of the character otherwise NULL
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}
	if (s[i] == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
