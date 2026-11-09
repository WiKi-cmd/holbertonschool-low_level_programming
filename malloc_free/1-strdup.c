#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _strdup - entry point
* @str: string we want to copy in memory
* Return: pointer to duplicated string or NULL if str == NULL or fail to copy
*/
char *_strdup(char *str)
{
	char *a;
	int c = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		c++;
		i++;
	}
	a = malloc(c * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
