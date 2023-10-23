#include"lists.h"
/**
 * pop_listint - function to pop head
 * @head: head ponter
 * Return: head pointer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr, ht;

	if (*head == NULL)
		return (0);
	curr = *head;
	n = head->n;
	*head = curr->next;
	free(curr);

	return (n);
}
