#include "main.h"

/**
* leet - entry point
* @s: string that we want to encode
*
* Return: the encoded string
*/
char *leet(char *s)
{
	int i = 0;
	int j;
	char *l = "aAeEoOtTlL";
	char *d = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				s[i] = d[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
