#ifndef LISTS_H
#define LISTS_H
#include<stddef.h>
/**
 * struct list_t -single linced list for string
 * @str: char pointer
 * @len: string lin
 * @next: pointer for next node
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
}
/*size_t for linckd */
size_t print_list(const list_t *h);

#endif
