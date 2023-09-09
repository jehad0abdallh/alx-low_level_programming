#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Write a program that prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main() {
    char ch;

   

    for (ch = 'a'; ch <= 'z'; ch++) {
       putchar(ch);
    }

    putchar('\n');
    return (0);
}
