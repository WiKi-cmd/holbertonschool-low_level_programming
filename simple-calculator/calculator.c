#include <stdio.h>

void add(void)
{
	int a, b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	printf("Result: %d\n", a + b);
}


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
	do{
		printf("Choice: ");
		scanf("%d", &choix);
		if (choix > 4 || choix < 0)
		{
			printf("Invalid choice\n");
		}
		if (choix == 0)
		{
		printf("Bye!\n");
		return (0);
		}
		if (choix == 1)
		{
			add();
		}
	} while(choix != 0);
	return (0);
}
