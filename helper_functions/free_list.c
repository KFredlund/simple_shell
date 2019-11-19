/**
 * free_list - free list_t
 * @head: pointer to beginning of string
 * Return: 0
 */
#include "holberton.h"
void free_list(list_t *head)
{
	list_t *listy;

	while (head != NULL)
	{
		listy = head;
		head = head->next;
		free(listy->str);
		free(listy);
	}
}
