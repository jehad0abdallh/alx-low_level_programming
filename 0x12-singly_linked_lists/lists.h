#ifndef LISTS_H
#define LISTS_H
#include<stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_n -single linced list for string
 * @str: char pointer
 * @len: string lin
 * @next: pointer for next node
 */
typedef struct list_n
{
	char *str;
	int len;
	struct list_n *next;
} list_t;
/*size_t for linckd */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif