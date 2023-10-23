#include"lists.h"
/**
 * free_listint2 - function to frea node
 * @head: head ponter
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *last;

	if (head != NULL)
	{
		last = *head;
		while (last != NULL)
		{
			temp = last;
			last = last->next;
			free(temp);
		}
		*head = NULL;
	}
}
