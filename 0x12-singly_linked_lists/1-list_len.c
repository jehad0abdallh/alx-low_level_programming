#include"main.h"
/**
 * list_len - return number of element
 * @h: struct list_node pointer
 * Return: number size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *node;

	for (count; h != NULL; count = 0)
	{
		h = h->next;
	}
	return (count);
}
