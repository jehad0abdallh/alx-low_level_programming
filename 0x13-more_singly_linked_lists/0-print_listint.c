#include"lists.h"


/**
 * print_listint - func to print linked list
 * @h: pointer for header
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
