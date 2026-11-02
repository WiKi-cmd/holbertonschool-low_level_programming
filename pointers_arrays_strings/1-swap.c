#include "main.h"
/**
* swap_int - entry point
* @a: pointer we want to swap the value it points to
* @b: pointer we want to swap the value it points to
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
