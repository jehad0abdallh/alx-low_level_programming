#include"lists.h"
/**
 * add_node_end - add node at end of list
 * @head: list_t
 * @str: char pointer
 * Return: head pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));

	new->next = NULL;
	if (new == NULL)
		return (NULL);
	 new->str = strdup(str);
	 new->len = strlen(str);
	 while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;
	return (*head);
}
