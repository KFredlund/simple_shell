/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: bytes written
 * Return: Output
 */
#include "holberton.h"
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	for (l = l; l < n; l++)
	{
		dest[l] = '\0';
	}
	return (dest);
}
