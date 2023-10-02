#include <stdio.h>
/**
 * main - block main print programe name
 * @argc: int
 * @argv: array of char of program token
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

