#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the lowercase alphabet in reverse
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
