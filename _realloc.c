/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: copied memory
 * @n: amount copied
 * Return: Output
 */
#include "holberton.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}

/**
 * _realloc - reallocate memory
 * @ptr: pointer to memory block
 * @old_size: allocated space for ptr
 * @new_size: new memory block
 * Return: 0
 */
#include "holberton.h"
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *size;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	size = malloc(new_size);
	if (size == NULL)
		return (NULL);
	if (ptr == NULL)
		return (size);
	if (new_size > old_size)
		_memcpy(size, ptr, old_size);
	else
		_memcpy(size, ptr, new_size);
	free(ptr);
	return (size);
}
