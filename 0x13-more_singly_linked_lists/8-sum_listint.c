#include"lists.h"
/**
 * sum_listint - function to add node
 * @head: head ponter
  * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *cur;

	cur = head;
	sum = 0;
	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
