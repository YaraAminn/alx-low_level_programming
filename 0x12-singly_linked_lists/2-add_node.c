#include "lists.h"

int len(const char *str);
/**
 * add_node - beginning node added
 *
 * @head: pointer to head of list
 * @str: inserted string firstly
 *
 * Return: pointer to first node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;

	if (head == NULL)
		return (NULL);

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);

	if (*head == NULL)
		node_new->next = NULL;
	else
		node_new->next = *head;
	node_new->str = strdup(str);
	node_new->len = len(str);
	*head = node_new;
	return (*head);
}
/**
 * len - get the length of string(str)
 *
 * @str: string that we need its length
 *
 * Return: string length
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
