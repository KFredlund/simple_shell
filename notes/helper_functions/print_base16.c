/**
 * print_base16 - print base 16 in lowercase
 *
 * Return: output
 */
#include "holberton.h"
int print_base16(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
