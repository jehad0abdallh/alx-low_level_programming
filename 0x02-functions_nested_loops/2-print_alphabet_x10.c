#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
        int i  = 0;
        char letter;

        while (i++ <= 9)
        {
                for (letter = 'a'; letter <= 'z'; letter++)
                _putchar(letter);

                _putchar(10);
        }
}