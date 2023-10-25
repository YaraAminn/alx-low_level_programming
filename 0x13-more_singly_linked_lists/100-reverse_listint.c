#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 *
 * @head: head pointer of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tempor;
	listint_t *new_tempor;

	if (head == NULL || *head == NULL)
		return (NULL);

	tempor = *head;
	*head = tempor->next;
	tempor->next = NULL;

	while (*head != NULL)
	{
		new_tempor = (*head)->next;
		(*head)->next = tempor;
		tempor = *head;
	if (new_tempor == NULL)
	{
		return (*head);
	}
	*head = new_tempor;
	}
	if (*head == NULL)
	{
		*head = tempor;
		return (*head);
	}
	return (NULL);

}
