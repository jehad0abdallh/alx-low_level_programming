#include"main.h"
/**
 *_strbrk - function that searches a string for any of a set of bytes.
 *@s: string pointer.
 *@accept: function that gets the length of a prefix substring.
 *Return: pointer for string.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
		i++;
	}
	return (0);
}
