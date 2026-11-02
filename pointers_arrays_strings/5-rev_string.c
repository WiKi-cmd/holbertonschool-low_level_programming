#include "main.h"

/**
* rev_string - entry point
*@s: string we want to reverse
*/
void rev_string(char *s)
{
	int c = 0;
	char s_rev;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c / 2; i++)
	{
		s_rev = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = s_rev;
	}
}
