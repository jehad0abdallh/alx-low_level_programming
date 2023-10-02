#include"main.h"
/**
 *_memcpy -  replace part of sting by string
 *@dest: string pointer.
 *@src: constent sting.
 *@n: string lingth.
 *Return: pointer to char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
