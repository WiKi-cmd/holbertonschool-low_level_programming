#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* string_nconcat - entry point
* @s1: string we want to concatenate
* @s2: other string we want to concatenate
* @n: number of bytes from s2 we want to concatenate to s1
*
* Return: pointer to allocated memory space with contents of s1 s2 or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c1 = 0;
	unsigned int c2 = 0;
	int i = 0;
	unsigned int j = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c1] != '\0')
	{
		c1++;
	}
	while (s2[c2] != '\0')
	{
		c2++;
	}
	if (c2 <= n)
	{
		a = malloc((c1 + c2) * sizeof(char) + 1);
	}
	else
	{
		a = malloc((c1 + n) * sizeof(char) + 1);
	}
	if (a == NULL)
		return (NULL);
	for (; i < c1; i++)
	{
		a[i] = s1[i];
	}
	for (; j < c2 && j < n; j++)
	{
		a[j + c1] = s2[j];
	}
	a[i + j] = '\0';
	return (a);
}
