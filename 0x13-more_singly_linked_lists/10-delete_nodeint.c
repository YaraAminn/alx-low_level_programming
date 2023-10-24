#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list
 *
 * @index: index of node should be deleted,Index start at 0
 * @head: pointer g=head of list
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempor;
	listint_t *node;
	unsigned int i;

	tempor = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tempor != NULL && index != 0; i++)
	{
		tempor = tempor->next;
	}
	if (tempor == NULL)
		return (-1);
	if (index == 0)
	{
		node = tempor->next;
		free(tempor);
		*head = node;
	}
	else
	{
		if (tempor->next == NULL)
		{
			node = tempor->next;
		}
		else
		{
			node = tempor->next->next;
		}
		free(tempor->next);
		tempor->next = node;
	}
	return (1);

}
