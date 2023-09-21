#include"main.h"
/**
 *rot13 - a function that encodes a string using rot13.
 *@s: string to be crypted .
 *Return: pointer to s .
 */

char *rot13(char *s)
{
	int i;

	char *rol13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ROL13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rol13[i])
			{
				*s = ROL13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
