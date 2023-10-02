#include"main.h"
/**
 *_strncat - concatenates two strings
 * @dest: string array
 * @src: string array
 * @n: number of index
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, i2;

	i = 0;
	while (dest[i])
		i++;
	for (i2 = 0; i2 < n && src[i2] != '\0'; i2++)
		dest[i + i2] = src[i2];
	dest[i + i2] = '\0';
	return (dest);
}
