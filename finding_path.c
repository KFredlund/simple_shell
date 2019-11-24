#include "holberton.h"
/**
 * grabpath - put path into double pointer
 * Return: double pointer
 */
char **grabpath()
{
	char **grab = NULL;
	char *input = NULL;

	input = _getenv("PATH");
	grab = strtok(input, ":");
	buffer(0, input);
	return (grab);
}

/**
 * find_path - helps find locations along PATH
 * @path: Path being parsed through
 * @args: Arguments being referenced
 * Return: Output to desired area in PATH
 */
int find_path(list_t *path, char **args)
{
	char *lost = NULL;
	char *found = NULL;
	int iterator;

	list_t *start = checker_struct(path);

	iterator = 0;
	while (start != NULL)
	{
		iterator++;
		lost = _strncat(start->, "/");
		found = _strncat(lost, args[]);
		if (found == 0)
		{
			free(args[]);
			args[] = _strcpy(found);
			free(found);
		}
		free(lost);
		free(found);
	}
	free(start);
}

/**
 * checker_struct - Linked list of directories from the PATH
 * @path: things to find along PATH
 * Return: Output
 */
list_t *checker_struct(list_t *path)
{
	int iterator1 = 0, int iterator2 = 0;
	char delim = ':';
	char *path;
	char *received;

	list_t *checker = NULL;

/* build out path environment */
	if (path == NULL)
		return (NULL);

	while (path[iterator1] != '\0')
	{
		received = malloc(sizeof(char) * _strlen(path));

		if (path[iterator1] != '\0')
		iterator++;
		iterator2++;
		received[iterator2] = '\0';
		if (received == NULL)
		{
			free(received);
				return (NULL);
		}
		while (path[iterator1] != '\0' && path[iterator1] != delim)
			received[iterator2] = path[iterator1];
		if (_strcmp(received, "\0") == 0)
		{
/* build out function to add to checker*/
		}

	}

	if (path[iterator1 - 1] == delim && path[iterator1] == '\0')
	{
/* build out function to add to checker */
	}
	free(received);
}
