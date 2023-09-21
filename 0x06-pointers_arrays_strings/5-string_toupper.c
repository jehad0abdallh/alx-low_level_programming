#include "main.h"
/**
 * string_toupper - leter to uper case.
 * @str: char in lowercase
 *
 * Return: char pointer string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);

}
