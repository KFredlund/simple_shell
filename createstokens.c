/**
 * createstokens - passes input through strtok
 * @pathtokens: collected tokens
 * Return: Output of tokens
 */
#include "holberton.h"
char **createstokens(char *pathtokens)
{
	/* tie in function for finding path here */

	pathtokens = strtok(pathtokens, ":");
	_puts_recursion(pathtokens);

	while (pathtokens = strtok(0, ":");
		{
	       _puts_recursion(pathtokens);
		}
}
