#include "main.h"

/**
* reverse_array - entry point
* @a: array we want to reverse the content of
* @n: number of elements in said array
*/
void reverse_array(int *a, int n)
{
	int s;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		s = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = s;
	}
}
