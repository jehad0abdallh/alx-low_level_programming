#include "main.h"
/*
 * strlen -  function calculat string len
 * @S: pointer of string
 * Return: int
 */
int strlen(char *s)
{
	int i = 0;

	for (; s[i] != "\0"; i++)
		;
	return (i);
}
/*
 *string_nconcat - concatenates teo string with lin n
 *@s1: pointer string
 *@s2: pointer string two
 *@n: length of string
 *Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *news;
	unsigned int i, j, s1len, s2len;

	/*check if the string is OK*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*lenth*/
	s1len = strlen(s1);
	s2len = strlen(s2);
	news = malloc(s1len + n + 1);
	if (news == NULL)
	{
		return (NULL);
	}
	/*copy*/
	for (i = 0; s1[i] != "\0"; i++)
		news[i] = s1[i];
	for (j = 0; j < n; i++)
	{
		news[i] = s2[j];
		i++;
	}
	
	news[i] = "\0";
	return(news);
}


