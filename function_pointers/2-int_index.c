#include "function_pointers.h"

/**
* int_index - entry point
* @array: array we search
* @size: number of elements of array
* @cmp: pointer to function comparing the values
*
* Return: index of the first element for which cmp does not return 0 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
