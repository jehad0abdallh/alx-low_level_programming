#include "main.h"
/*
 * print_alphabet function
 *to print *10 alphapet in lowercase 
 * Return :no  return 
 * */


void print_alphabet_x10(void)
{
	int i  = 0 ;

	while( i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar(10);

	}



}
