#include "lists.h"

list_t *create_node(const char *str);
int len(const char *str);
/**
 * add_node_end - function to add nodes at the end
 * @head: pointer to first node
 * @str: string of new added node
 * Return: pointer at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tempor;
	list_t *node_new;

	tempor = *head;
	if (head == NULL)
		return (NULL);
	{
		node_new = create_node(str);
	}
	if (node_new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node_new;
		return (*head);
	}
	while (tempor->next != NULL)
	{
		tempor = tempor->next;
	}
	tempor->next = node_new;
	return (*head);
}
/**
 * create_node - function to add new node
 * @str: string input in created new node
 *
 * Return: pointer malloc memory
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}
/**
 * len - length of string
 * @str: length of string to get
 * Return: the required length
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
