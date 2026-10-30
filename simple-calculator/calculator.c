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

void sub(void)
{
	int a, b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	printf("Result: %d\n", a - b);
}

void mul(void)
{
	int a, b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	printf("Result: %d\n", a * b);
}

void div(void)
{
	int a, b;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	if (b == 0)
	{
		printf("Error: division by zero\n");
	}
	else
	{
		printf("Result: %g\n", (double)a / b);
	}
}

int main(void)
{
	int choix;

	printf("Welcome\n\nSimple Calculator\n");
	printf("1) Add\n2) Substract\n3) Multiply\n4) Divide\n0) Quit\n");
	do{
		printf("Choice: ");
		scanf("%d", &choix);
		if (choix > 4 || choix < 0)
		{
			printf("Invalid choice\n");
		}
		else if (choix == 0)
		{
			printf("Bye!\n");
			return (0);
		}
		else if (choix == 1)
		{
			add();
		}
		else if (choix == 2)
		{
			sub();
		}
		else if (choix == 3)
		{
			mul();
		}
		else
		{
			div();
		}
	} while(choix != 0);
	return (0);
}
