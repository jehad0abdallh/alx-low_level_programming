#include"lists.h"
#include <string.h>
/**
 * insert_nodeint_at_index - function to add node in index
 * @head: head ponter
 * @idx: index
 * @n: new value
 * Return: new node address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *cur, *last;

	cur = malloc(sizeof(listint_t));
	if (cur == NULL)
		return (NULL);

	last = *head;
	if (idx != 0)
	{
		i = 0;
		while (i < idx - 1 && last != NULL)
		{
			last = last->next;
			i++;
		}
	}

	if (last == NULL && idx != 0)
		return (NULL);
	cur->n = n;
	if (idx == 0)
	{
		cur->next = *head;
		*head = cur;
	}
	else
	{
		cur->next = last->next;
		last->next = cur;
	}
	return (cur);
}

