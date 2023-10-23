#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * add_nodeint_end - add new node at end
 * @head: head pointer
 * @n: int value
 * Return: head pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	last = *head;
	/*the first node*/
	if (*head == NULL)
		*head = new;
	else
	{
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	}
	return (*head);
}
