#include "main.h"
/**
 * _strdup -  pointer to a newly allocated space in memory
 * @str: pointer of arrary
 * Return: new coby of string allocated in memory
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	arr = malloc(size * sizeof(*str) + 1);

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			arr[i] = str[i];
	}
	return (arr);
}
