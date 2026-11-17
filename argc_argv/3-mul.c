#include "main.h"

/**
* main - entry point
* @argc: argument count
* @argv: list of arguments
*
* Return: 0 for success otherwise 1 if more or less than 2 arguments input
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
