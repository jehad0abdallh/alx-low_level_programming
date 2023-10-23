#include"lists.h"
/**
 * get_nodeint_at_index - function to return node by index
 * @head: head ponter
 * @index: index of node
 * Return: node pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (int i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head);
}

