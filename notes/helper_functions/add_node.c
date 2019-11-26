/**
 * add_node - add new node to beginning of list
 * @head: pointer of first node
 * @str: string being added to
 * Return: Output
 */
#include "holberton.h"
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *newnode;

	len = 0;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	while (str[len])
		len++;
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
