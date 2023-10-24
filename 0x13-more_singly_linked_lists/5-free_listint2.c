#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: pointer to first element in list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tempor;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tempor = (*head)->next;
		free(*head);
		*head = tempor;
	}
	free(*head);
	*head = NULL;

}
