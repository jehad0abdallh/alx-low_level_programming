#include "main.h"
/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
