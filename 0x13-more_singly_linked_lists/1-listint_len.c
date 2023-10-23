#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * listint_len - func to return elemnt number
 * @h: header pointer
 * Return: noumber of elemnt
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
