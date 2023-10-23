#include "lists.h"
/**
 * listint_len - structure to count the elements
 * number in a list
 *
 * @h: head pointer
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
