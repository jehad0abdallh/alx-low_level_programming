#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * add_nodeint - function to add node
 * @head: head ponter
 * @n: new value
 * Return: head pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
