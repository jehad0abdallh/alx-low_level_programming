#include"function_pointers.h"
/**
 * int_index - search for int
 * @array: int arr
 * @size: array size
 * @cmp: functuon to compare
 * Return:  int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
