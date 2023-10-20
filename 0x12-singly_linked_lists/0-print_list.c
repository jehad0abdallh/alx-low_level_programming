#include"lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - print linked list element
 * @h: list_t struct
 * Return: size_t of listcount
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	list_t *new;

	for (; h != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%d] %s \n", 0, "(nil)");
		else
			printf("[%d] %s \n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
