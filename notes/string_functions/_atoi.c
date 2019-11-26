#include "holberton.h"
/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: Outcome
 */
int _atoi(char *s)
{
	int n;
	int pos;
	int neg;

	n = 0;
	pos = 0;
	neg = 1;
	if (*s == '\0')
		return (0);
	else if (s[0] == '-')
	{
		neg = -1;
		n++;
	}
	for (; s[n] != '\0'; n++)
	{
		if (s[n] <= '0' || s[n] >= '9')
			return (0);
		pos = pos * 10 + s[n] - '0';
	}
	return (neg * pos);
}
