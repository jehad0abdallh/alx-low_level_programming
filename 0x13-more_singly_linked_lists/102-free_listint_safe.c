#include"lists.h"
/**
 *free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;
	listint_t cur;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		if (*h != (*h)->next)
		{
			cur = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			len++;
		}
	}
	*h = NULL;
	return (len);
}

