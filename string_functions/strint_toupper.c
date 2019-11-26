/**
 * string_toupper - clanges lowercase to uppercase
 * @str: string being converted
 * Return: Output
 */
#include "holberton.h"
char *string_toupper(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] = str[l] - 32;
		}
		l += 1;
	}
	return (str);
}
