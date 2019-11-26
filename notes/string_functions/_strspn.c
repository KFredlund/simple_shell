/**
 * _strspn - length of prefix string
 * @s: segment of string
 * @accept: bytes accepted
 * Return: Output
 */
#include "holberton.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;
	unsigned int n;
	unsigned int o;

	for (m = 0; s[m] > ' '; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
			if (accept[n] == s[m])
			{
				o++;
			}
	}
	return (o);
}
