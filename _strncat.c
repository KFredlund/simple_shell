/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes from source
 * Return: Output
 */
#include "holberton.h"
char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	l = 0;
	m = 0;
	while (dest[l] != '\0')
	{
		l += 1;
	}
	while (src[m] != '\0' && m < n)
	{
		dest[l] = src[m];
		l += 1;
		m += 1;
	}
	return (dest);
}
