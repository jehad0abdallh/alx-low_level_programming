#include"lists.h"
/**
 * add_node - link new node list
 * @head: list_t heed linkedlist
 * @str: string char
 * Return: new node address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	return (*head);
}
