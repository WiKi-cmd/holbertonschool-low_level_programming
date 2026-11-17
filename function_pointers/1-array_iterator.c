#include "function_pointers.h"

/**
* array_iterator - entry point
* @array: array subject to the modifications
* @size: array size
* @action: pointer to the function we are gonna apply to the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
