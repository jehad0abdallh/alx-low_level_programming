#include<stdio.h>
#include<stdlib.h>
/**
 * main - main block 
 * Description :print all single digit numbers of base 10
 * start from 0 , followed by new line .
 * Rreturn :0
 */
int main(void)
{
	char ch = '0';

	while (ch  <= '9')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
