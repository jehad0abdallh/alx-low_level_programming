#include <stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: pointer to the string to be printed between num
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pram;

	va_start(pram, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pram, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pram);
}
