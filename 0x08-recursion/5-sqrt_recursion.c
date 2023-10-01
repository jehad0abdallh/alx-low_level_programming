#include "main.h"
/**
 * sqrtt- root sqrt
 * @a: same number as n
 * @b: int
 * Return: On success 1.
 */
int sqrtt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b < a)
		return (sqrtt(a, b + 1));
	else
		return (-1);
	
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqrtt(n, 1));
}
