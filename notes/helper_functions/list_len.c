/**
 * list_len - return number of nodes
 * @h: list being checked
 * Return: Output
 */
#include "holberton.h"
size_t list_len(const list_t *h)
{
	int l;

	l = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
