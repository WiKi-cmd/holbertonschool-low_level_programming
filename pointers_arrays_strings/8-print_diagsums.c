#include "main.h"
#include <stdio.h>

/**
* print_diagsums - entry point
* @a: matrix to compute the diagonal sums of
* @size: size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 += a[i * size + j];
			}
			if (j == size - i - 1)
			{
				sum2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
