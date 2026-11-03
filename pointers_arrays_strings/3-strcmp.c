#include "main.h"

/**
* _strcmp - entry point
* @s1: string we want to compare
* @s2: other string we want to compare
*
* Return: 0 if equal, positive or negative value if they are different
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
