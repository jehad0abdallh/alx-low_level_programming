#include"main.h"
/**
 *print_chessboard - function that searches a string for any of a set of bytes.
 *@a: array row 8.
 *Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	char *p;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
