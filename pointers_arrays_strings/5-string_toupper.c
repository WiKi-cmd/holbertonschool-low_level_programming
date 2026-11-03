#include "main.h"

/**
* string_toupper - entry point
* @s: string we want to change all lowercase characters to uppercase
*
* Return: the string with changed character
*/
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] -= 32;
		}
	c++;
	}
	return (s);
}
