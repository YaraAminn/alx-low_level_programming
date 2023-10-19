#include "lists.h"
/**
 * list_len - function returns number of elements in linked list
 *
 * @h: pointer to the 1st node
 *
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
