#include "lists.h"
/**
 * pop_listint - function that deletes the head
 * node of a listint_t linked list, and
 * returns the head node’s data (n).
 *
 * @head: pointer head of the list
 *
 * Return: node data(n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tempor;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tempor = *head;
	*head = (*head)->next;
	free(tempor);
	return (n);
}
