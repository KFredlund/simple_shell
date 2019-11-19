/**
 * _strlen - return length of string
 * @s: string being measured
 * Return: length of string
 */
#include "holberton.h"
int _strlen(char *s)
{
	int t = 0;
	while (s[t] != '\0')
	{
		t += 1;
	}
	return (t);
}
