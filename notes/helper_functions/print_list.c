/**
 * print_list - print elements of list
 * @h: list being printed
 * Return: Output
 */
#include "holberton.h"
size_t print_list(const list_t *h)
{
	int l;

	for (l = 0; h != NULL; l++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (l);
}
