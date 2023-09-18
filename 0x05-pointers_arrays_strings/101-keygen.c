#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Return: 0
 *
*/
int main(void)
{
	int stm;
	char c;

	srand(time(NULL));
	while (stm <= 2645)
	{
		c = rand() % 128;
		stm += c;
		putchar(c);
	}
	putchar(2772 - stm);
	return (0);
}
