#include "main.h"

/**
 * is_digits - checks that a string contains only digits
 * @s: string to check
 *
 * Return: 1 if only digits, 0 otherwise
 */
int is_digits(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
* main - entry point
* @argc: argument count
* @argv: list of arguments
*
* Return: 0 for success otherwise 1 if more or less than 2 arguments input
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 0)
	{
		printf("%d\n", argc);
		return (0);
	}
	while (argv[i])
	{
		if (!is_digits(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
