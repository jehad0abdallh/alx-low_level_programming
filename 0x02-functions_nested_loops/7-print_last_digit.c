#include "main.h"
/**
* _abs - prints the absolute value of a number
*@i: number targeted
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
