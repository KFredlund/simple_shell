#include "holberton.h"
/**
* _getline - Function that reads a line from stdin and writes
* standard output
* @line: string from standard input to read
*
* Return: Number of bytes read
*/
ssize_t  _getline(char *line)
{
	size_t len = _strlen(line);
	char *buf = malloc(sizeof(char) * len);
	ssize_t a, b;

	if (line == NULL)
		return (0);
	if (buf == NULL)
		return (0);
	a = read(STDIN_FILENO, buf, len);
	if (a == -1)
		return (0);
	b = write(STDOUT_FILENO, buf, a);
	if (b == -1)
		return (0);
	return (a);
}
