/**
 * rev_string - reverse string
 * @s: string being printed
 * Return: String
 */
#include "holberton.h"
void rev_string(char *s)
{
	int l, m;
	char temp;
	for (l = 0; s[l]; l++)
	{
		for (m = 0; m <= l; m++)
		{
			temp = s[m];
			s[m] = s[l];
			s[l] = temp;
		}
	}
}
