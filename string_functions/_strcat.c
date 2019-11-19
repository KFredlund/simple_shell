/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: Output
 */
#include "holberton.h"
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int m = 0;

	while (dest[l] != '\0')
	{
		l += 1;
	}
	while (src[m] != '\0')
	{
		dest[l] = src[m];
		l += 1;
		m += 1;
	}
	return (dest);
}
