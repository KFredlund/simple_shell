#include "holberton.h"
int _strcmp(char *s1, char *s2);
void cont_c_help(int i) __attribute__((unused));
int filter(char *token);
/**
* main - Entry point, main function
* @env: env variable parameter
* Return: 0 if success, else 1
*/
int main(char **env)
{
	char *buf = NULL, *line, *prompt = "$ ", **path;
	char *token, *nl = "\n";
	int input, status = 0;
	size_t n = 0;

	while (status < '\n')
	{
		signal(SIGINT, cont_c_help);
		write(1, prompt, strlen(prompt) + 1);
		input = getline(&buf, &n, stdin);
		if (input == EOF)
		{
			write(1, "\n", 4);
			exit(1);
		}
		token = strtok(buf, " ");
		status = filter(token);
	/*	if (filter == 1) */
	/*	{ */
	/*		path = getpath(env); */
	/*		childandparent(path, token); */
	/*	} */
	}
		status++;
	free(buf);
	free(token);
	return (0);
}
/**
 * cont_c_help - Function that exits a program with C^c signal
 * @i: int var parameter
 * Return: Never
 */
void cont_c_help(int i)
{
	char *prompt2 = "\n$ ";

	write(1, prompt2, strlen(prompt2) + 1);
}
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Output
 */
int _strcmp(char *s1, char *s2)
{
	int l;

	l = 0;
	while ((s1[l] != '\0' || s2[l] != '\0') && s1[l] == s2[l])
	{
		l++;
	}
	return (s1[l] - s2[l]);
}
/**
 * filter - checks if command is a built in function
 * @token: arguments to execute
 *
 * Return: number of args executed
 */
int filter(char *token)
{
	int switch_cmnd = 0;
	size_t i = 0;
	char *home = "/home", *builtin_list[6];

	builtin_list[0] = "cd\n";
	builtin_list[1] = "help\n";
	builtin_list[2] = "exit\n";
	builtin_list[3] = "env\n";
	if (!token)
		return (1);
	for (; i < 4; i++)
	{
		if (_strcmp(token, builtin_list[i]) == 0)
			switch_cmnd = i + 1;
	}
	switch (switch_cmnd)
	{
		case 1:
			chdir(home);
			return (0);
		case 2:
			write(1, "help function runs now", _strlen("help function runs now") + 1);
			return (0);
		case 3:
			exit(0);
		case 4:
			write(1, "env function", _strlen("env function") + 1);
			return (0);
		default:
			perror("Command Not Found");
			break;
	}
	return (0);
	}
