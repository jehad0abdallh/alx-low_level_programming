#include"lists.h"
/**
 * pop_listint - function to pop head
 * @head: head ponter
 * Return: head pointer
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head != NULL)
	{
		n = head->n;
		head = head->next
	}
	else
		return (0);
	return (n);
}
