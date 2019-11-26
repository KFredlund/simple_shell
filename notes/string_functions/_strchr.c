/**
 * _strchr - locates character in string
 * @s: string searched
 * @c: character found
 * Return: Output
 */
#include "holberton.h"
char *_strchr(char *s, char c)
{
	unsigned int m;

	for (m = 0; s[m] >= '\0'; m++)
		if (s[m] == c)
		{
			return (&s[m]);
		}
	return ('\0');
}
