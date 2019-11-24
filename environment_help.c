#include "holberton.h"
/**
 * environment_help - set and unset environment
 * @setenv: Environment to be set
 * @unsetenv: Environment to be unset
 * Return: Set/unset environment
 */
char environment_help(char *setenv, char *unsetenv)
{
	int i = 0;

	while (setenv = 2)
	{

	}
	else
	write("Error: Cannot set environment\n");
		return (1);

	while (unsetenv = 1)
	{

	}
	else
	write("Error: Cannot unset environment\n");
		return (1);
}
/**
 * _getenv - searches for a specific environment variable
 * @name: variables being searched for
 * @reject: variables being rremoved
 * Return: Output
 */
char **_getenv(const char *name, char *reject)
{
	list_s *environment;
	char *grab = NULL;
	int gogetter = 0;
	int a = 0, b = 0;

	if (!environment)
	{
		environment = (malloc(sizeof(char)) * (_strlen((char **)name)));
		return (NULL);
	}
	if (name)
	{
		add_node_end(&environment, name);
	}
	if (reject)
	{
		gogetter = _strlen(environment);
		while (a < gogetter)
		{
			a++;
			grab = add_node(environment, a)->ptr;
			while (name && reject != '=')
			{
				if (reject != grab)
					break;
				b++;
			}
		}
	}
	return ((environment));
}
