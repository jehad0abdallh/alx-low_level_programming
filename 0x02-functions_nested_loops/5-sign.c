#include "main.h"
/**
*print_sign : desc prints sign of a the number
*@num: character to be verified
*Return: return 0 or 1
*/
int print_sign(int num)
{
if (num == 0)
{
_putchar('0');
return (0);
}
else if (num > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}

