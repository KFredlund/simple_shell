/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Output
 */
#include "holberton.h"
int _strcmp(char *s1, char *s2)
{
	int l;

	l = 0;
	while ((s1[l] != '\0' || s2[l] != '\0') && s1[l] == s2[l])
	{
		l++;
	}
	return (s1[l] - s2[l]);
}
