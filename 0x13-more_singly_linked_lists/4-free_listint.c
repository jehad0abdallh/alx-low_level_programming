#include"lists.h"
/**
 * free_listint - free memory space
 * @head: pointer of r=head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *last;

	while (head != NULL)
	{
		last = head;
		head = head->next;
		free(last);
	}
}

