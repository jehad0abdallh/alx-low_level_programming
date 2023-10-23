#include"lists.h"
/**
 * free_listint - free memory space
 * @head: pointer of r=head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	last = head;
	while (last != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
}

