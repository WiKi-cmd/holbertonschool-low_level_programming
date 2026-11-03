#include "main.h"

/**
* cap_string - entry point
* @s: string which we want the words capitalized
*
* Return: string with words capitalized
*/
char *cap_string(char *s)
{
	int c = 0;

	if (s[c] >= 'a' && s[c] <= 'z')
	{
		s[c] -= 32;
	}
	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			if (s[c - 1] == ' ' || s[c - 1] == '\n' || s[c - 1] == '\t')
			{
				s[c] -= 32;
			}
			if (s[c - 1] == ',' || s[c - 1] == ';' || s[c - 1] == '.')
			{
				s[c] -= 32;
			}
			if (s[c - 1] == '!' || s[c - 1] == '?' || s[c - 1] == '"')
			{
				s[c] -= 32;
			}
			if (s[c - 1] == '(' || s[c - 1] == ')' || s[c - 1] == '{')
			{
				s[c] -= 32;
			}
			if (s[c - 1] == '}')
			{
				s[c] -= 32;
			}
		}
		c++;
	}
	return (s);
}
