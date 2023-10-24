#include "lists.h"
/**
 * make_new_node - function to create new node
 *
 * @n: input integer data
 *
 * Return: pointer
 */
listint_t *make_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_nodeint_at_index - function that inserts
 * new node at a given position
 *
 * @head: pointer to head of the list
 * @idx: index of the list where the new node should be
 * added. Index starts at 0
 * @n: input data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tempor;
	listint_t *old_tempor;
	listint_t *new_node;

	tempor = *head;
	if (head == NULL)
		return (NULL);
	new_node = make_new_node(n);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		*head = new_node;
	}
	for (i = 0; i < idx - 1 && tempor != NULL && idx != 0; i++)
	{
		tempor = tempor->next;
	}
	if (tempor == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = tempor;
	}
	else
	{
		old_tempor = tempor->next;
		tempor->next = new_node;
		new_node->next = old_tempor;
	}
	return (new_node);
}
