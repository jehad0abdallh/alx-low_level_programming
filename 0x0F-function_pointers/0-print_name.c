#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - print from function
 * @name: string
 * @f: pointer of funcion
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
