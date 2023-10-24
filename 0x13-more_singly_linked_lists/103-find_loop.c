#include"lists.h"
/**
 * find_listint_loop - find loop in a list
 * @head: pointer head
 * Return: loop node adress
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *last;

	loop = head;
	last = head;
	while (head != NULL && loop != NULL && loop->next != NULL)
	{
		head = head->next;
		loop = loop->next->next;
		/*hello loop*/
		if (loop == head)
		{
			head = last;
			last = loop;
			while (1)
			{
				loop = last;
				while (loop->next != head && loop->next != last)
					loop = loop->next;
				if (loop->next == head)
					break;
				head = head->next;
			}
			return (loop->next);
		}
	}
	return (NULL);
}

