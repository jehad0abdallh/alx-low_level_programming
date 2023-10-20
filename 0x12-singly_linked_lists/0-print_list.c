#include"lists.h"
/**
 * print_list - print linked list element
 * @h: list_t struct
 * Return: size_t of listcount
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;


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
