#include "main.h"
/**
 * _puts_rev_recursion - function for print reverse char
 * @s: Pointer
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
