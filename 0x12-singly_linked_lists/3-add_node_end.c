#include"lists.h"
/**
 * add_node_end - add node at end of list
 * @head: list_t
 * @str: char pointer
 * Return: head pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[len])
		len++;
	new->len = len;
	new->next = NULL;
	last = *head;
	if (last == NULL)
	{
		*head = new;
	}
	else
	{
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;
	}
	return (*head);
}
