#include"main.h"
/**
 *print_diagsums - function that searches a string for any of a set of bytes.
 *@a: pointer of array.
 *@size: array size
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, s = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s);
	printf("%d\n", s2);
}
