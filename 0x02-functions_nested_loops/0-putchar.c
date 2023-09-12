#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Description:prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{	
	char alx[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(alx[i]);
	}
	_putchar(10);
	return (0);
}
