/**
 * _strcpy - copy string to buffer
 * @dest: where copy is going
 * @src: where copy is from
 * Return: pointer to dest
 */
#include "holberton.h"
char *_strcpy(char *dest, char *src)
{
	int l;
	for (l = 0; src[l] != '\0'; l++)
		dest[l] = src[l];
	dest[l] = '\0';
	return (dest);
}
