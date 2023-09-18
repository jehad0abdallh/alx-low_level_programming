#include"main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: destnation input
 * @src: string src
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
