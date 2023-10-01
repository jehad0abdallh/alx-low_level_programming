#include "main.h"
/**
 * sqrt - root sqrt
 * @a: same number as n
 * @b: int
 * Return: On success 1.
 */
int sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b < a)
		return (sqrt(a, b + 1));
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
	return (sqrt(n, 1));
}
