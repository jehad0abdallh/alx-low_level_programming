#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/*for valid error*/
	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc((size) * sizeof(int));
	i = 0;

	if (!arr)
		return (NULL);
	for (; i < size; i++)
		arr[i] = min++;

	return (arr);
}
