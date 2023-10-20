#include"lists.h"
/**
 * free_list - function free list_t list
 * @head: head pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);

	}
}
