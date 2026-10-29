#include <stdio.h>

int main(void)
{
	int choix;

	printf("Welcome\n");
	printf("\n");
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Substract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
	scanf("%d", &choix);
	if (choix == 0)
	{
		printf("Bye!\n");
		return (0);
	}
	return (0);
}
