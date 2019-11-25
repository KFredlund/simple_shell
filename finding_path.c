#include "holberton.h"
/**
 * getpath - helps finish finding locations along PATH
 * @path: Path being parsed through
 * @args: Arguments being referenced
 * Return: Output to desired area in PATH
 */
char *getpath(char *path, char **args)
{
	char *lost = NULL;
	char *found = NULL;
	int iterator = 0;

	path = getenv[iterator];

	while (path != NULL)
	{
		iterator++;
		lost = _strncat(path->ptr, "/");
		found = _strncat(lost, args[0]);
		if (found == 0)
		{
			free(args[0]);
			args[0] = _strcpy(found);
			free(found);
		}
	}
	free(path);
}
