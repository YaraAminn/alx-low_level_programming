#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - single linked list
 *
 * @str: string
 * @len: string length
 *
 * @next: pointer to thw next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);



#endif
