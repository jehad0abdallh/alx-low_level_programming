#include "main.h"
/**
 * leet - function
 * @str: Pointer
 * Return: poniter return to function.
 */

char *leet(char *str)
{
	char *cp = str;
	char symb[] = {'a', 'e', 'o', 't', 'i'};
	int rep[] = {4, 3, 0, 7, 1};
	unsigned int i, j;

	while (*str)
	{
		for (j = 0; j < sizeof(symb) / sizeof(char); j++)
		{
			if (*str == symb[j] || *str == symb[j] - 32)
				*str = 48 + rep[j]
		}
	}
	return (str);
}
