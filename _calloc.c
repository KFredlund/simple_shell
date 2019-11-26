/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: memory being filled
 * Return: Output
 */
#include "holberton.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory
 * @nmemb: allocated memory
 * @size: size allocated
 * Return: 0
 */
#include "holberton.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	_memset(m, 0, nmemb * size);
	return (m);
}
