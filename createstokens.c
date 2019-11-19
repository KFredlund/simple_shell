/**
 * createstokens - passes input through strtok
 * @path: collected path
 * Return: Output of tokens
 */
#include "holberton.h"
char **createstokens(char *path)
{
	/* tie in function for finding path here */

	pathtokens = strtok(path, ":");
	_puts_recursion(pathtokens);

	while (path = strtok(0, ":");
		{
	       _puts_recursion(pathtokens);
		}
}
