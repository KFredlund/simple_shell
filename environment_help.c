#include "holberton.h"
/**
 * environment_help - set and unset environment
 *
 *
 */
char environment_help()
{
	while !(setenv = 2)
	{
		write("Error: Cannot set environment\n");
		return (1);
	}

	while !(unsetenv = 1)
	{
		write("Error: Cannot unset environment\n");
		return (1);
	}
}
/**
 * _getenv - searches for a specific environment variable
 * @name: Name being searched for
 * Return: Output
 */
char *_getenv(const char *name)
