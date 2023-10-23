#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: pointer to the first node
 *
 * Return: nothing (void)
 */
void free_listint(listint_t *head)
{
	listint_t *tempor;

	while ((tempor = head) != NULL)
	{
		head = head->next;
		free(tempor);
	}
}
