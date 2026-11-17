#include "main.h"

/**
* main - entry point
* @argc: argument count
* @argv: list of arguments
*
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
