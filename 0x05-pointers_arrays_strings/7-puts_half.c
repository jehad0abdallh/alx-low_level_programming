#include"main.h"
/**
 * puts_half - print prints every other character of a string
 * @str: first input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
