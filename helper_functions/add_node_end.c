/**
 * add_node_end - add node to end
 * @head: pointer to beginning of str
 * @str: string
 * Return: Output
 */
#include "holberton.h"
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *newnode;
	int l;

	tail = *head;
	for (l = 0; str[l] != '\0'; l++)
		newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = l;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newnode;
	return (newnode);
}
