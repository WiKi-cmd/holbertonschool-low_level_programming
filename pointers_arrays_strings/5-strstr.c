#include "main.h"
#include <stddef.h>

/**
* _strstr - entry point
* @haystack: the string we search
* @needle: the string we based the search on
*
* Return: pointer to beginning of located string or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int k;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (haystack[k] == needle[j] && needle[j] != '\0')
			{
				k++;
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
