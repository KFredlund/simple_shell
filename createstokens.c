/**
 * createstokens - passes input through strtok
 * @tokens: collected tokens
 * Return: Output of tokens
 */
#include "holberton.h"
char createstokens(char *token)
{
	char *path = env("PATH");

	tokens = strtok(path, ":");
	_puts_recursion(tokens);

	while (tokens = strtok(0, ":");
		{
	       _puts_recursion(tokens);
		}
	return (0);
}
