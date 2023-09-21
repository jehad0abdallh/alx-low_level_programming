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

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; symb[j] != '\0'; j++)
	{
		if (str[i] == symb[j] || str[i] == symb[j] - 32)
			str[i] = rep[j];
	}
	}
	return (str);
}
