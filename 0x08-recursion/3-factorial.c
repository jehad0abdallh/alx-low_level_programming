
#include "main.h"
/**
 *_strlen_recursion - function for print reverse char
 * @n: int for number
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		retrurn (1);
	}
	return(n * factorial(n - 1));
}

