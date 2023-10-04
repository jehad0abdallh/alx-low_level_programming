#include"main.h"
/**
 * gitlen - git kingth of string
 * @s - string pointer
 * Return: int
 */
int gitlen(char *s)
{
	int i;

	for (i = 0; s[i] !='0'; i++)
		;
	return (i);
}
/**
 * *str_concat - concat two string
 * @s1: string
 * @s2: string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i1, i2, j;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	i1 = gitlen(s1);
	i2 = gitlen(s2);
	m = malloc((i1 + i2) *sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (j = 0; j <= i1 + i2; j++)
	{
		if (j < i1)
			m[j] = s1[j];
		else
			m[j] = s2[j - i1];
	}
	m[j] = '\0';
	return (m);
}
