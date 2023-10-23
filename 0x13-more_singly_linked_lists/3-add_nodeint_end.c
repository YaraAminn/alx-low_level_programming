#include "lists.h"
/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list.
 *
 * @head: pointer to the head of list
 * @n: input integer data to be added
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempor;

	(void)tempor;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tempor = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tempor->next != NULL)
		{
			tempor = tempor->next;
		}
		tempor->next = new;
	}
	return (*head);
}
