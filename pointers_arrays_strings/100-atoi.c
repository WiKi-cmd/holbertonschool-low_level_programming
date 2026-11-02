#include "main.h"

/**
* _atoi - entry point
* @s: the string we want to convert into a an integer
*
* Return: the integer result of the conversion, otherwise 0
*/

int _atoi(char *s)
{
	int c = 0;
	int sign = 1;
	int i = 0;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
		{
			sign = -sign;
		}
		else if (s[c] >= '0' && s[c] <= '9')
		{
			i = i * 10 + (s[c] - '0');
			if (s[c + 1] < '0' || s[c + 1] > '9')
			{
				return (i * sign);
			}
		}
	c++;
	}
	return (i * sign);
}
