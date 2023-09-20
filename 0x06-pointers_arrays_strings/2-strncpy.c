#include"main.h"
/**
 *_strncpy - copy array yo dest
 * @dest: string array
 * @src: string array
 * @n: number of index
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] =  '\0';
		i++;
	}
	return (dest);
}
