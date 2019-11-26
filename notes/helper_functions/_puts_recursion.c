/**
 * _puts_recursion - prints a string and a new line
 * @s: string being printed
 * Return: Output
 */
#include "holberton.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
