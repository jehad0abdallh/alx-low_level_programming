#include"main.h"
/**
 *reverse_array - function comparison of strings
 *@a:  pointer
 *@n:  array size
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;


	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
