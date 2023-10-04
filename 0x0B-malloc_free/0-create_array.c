#include"main.h"
/**
 * *creat_array -  creates an array of chars
 * @size: size of array
 * @c: char to initialized
 * Return: pointer of array
 */
char *creat_array(unsigned int size, char c)
{
	char *arr = melloc(size);

	if (size == 0 || arr == 0)
		return (0);
	while (size--)
		arr[size] = c;
	return (arr);
}
