#include "lists.h"
/**
 * free_list - function to free a list
 *
 * @head: pointer to first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tempor;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tempor = head->next;
		free(head->str);
		free(head);
		head = tempor;
	}
	free(head->str);
	free(head);
}
