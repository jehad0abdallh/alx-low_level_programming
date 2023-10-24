#include"lists.h"
/**
 * delete_nodeint_at_index - function to add node
 * @head: head ponter
 * @index: delelt node
  * Return: int  value
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *last, *cur;

	last = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && last != NULL; i++)
			last = last->next;
	}
	if (last == NULL || (last->next == NULL && index != 0))
	{
		return (-1);
	}
	cur = last->next;
	if (index != 0)
	{
		last->next = cur->next;
		free(cur);
	}
	else
	{
		free(last);
		*head = cur;
	}
	return (1);
}
