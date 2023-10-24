#include"lists.h"
/**
 * reverse_listint - function to add node
 * @head: head ponter
 * Return: new head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last, *cur;

	last = NULL;
	cur = NULL;
	while (*head != NULL)
	{
		/*swap to make the end*/
		cur = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = cur;
	}
	*head = last;
	return (*head);
}
