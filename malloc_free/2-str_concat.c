#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* str_concat - entry point
* @s1: string we want to concatenate
* @s2: other string we want to concatenate
*
* Return: pointer to allocated memory space with contents of s1 s2 or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int c1 = 0;
	int c2 = 0;
	int i = 0;
	char *a;

	while (s1[i] != '\0')
	{
		c1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		c2++;
		i++;
	}
	a = malloc((c1 + c2) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < c2; i++)
	{
		a[i + c1] = s2[i];
	}
	return (a);
}
