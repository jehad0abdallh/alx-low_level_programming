#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/
int print_last_digit(int i)
{
int re;

re = i % 10;
if (re < 0)
re *= -1;

_putchar(re + '0');
return (re);
}
