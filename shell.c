#include "holberton.h"
/**
* main - Entry point, main function
*
* Return: 0 if success, else 1
*/
int main(void)
{
	char *buf, *line, *prompt = "Team Kati^2e Shell$ ";
	char *ex = "exit\n";
	int input, status = 0;
	size_t n;

	buf = malloc(sizeof(n + 1));
	if (buf == NULL)
	{
		perror("Memory allocation fail\n");
		exit(1);
	}
	while (status < '\n')
	{
		write(1, prompt, strlen(prompt) + 1);
		input = getline(&buf, &n, stdin);
		if (strcmp(buf, ex) == 0)
		{
			return (EXIT_SUCCESS);
		}
		else
		{
			printf("%s", buf);
			status++;
		}
	}
	return (0);
	//getline
/* call to strtok function */
	//execute args
	// free line
	// free args
}
