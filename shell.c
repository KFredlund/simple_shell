#include "holberton.h"
int _strcmp(char *s1, char *s2);
void cont_c_help(int i) __attribute__((unused));
int filter(char *token);
/**
* main - Entry point, main function
* Return: 0 if success, else 1
*/
int main(char **env)
{
	char *buf, *line, *prompt = "$ ";
	char *token,/* *ex = "exit\n",*/ *nl = "\n";
	int input, status = 0;
	size_t n;
	char **path;

	buf = malloc(sizeof(n + 1));
	if (buf == NULL)
	{
		perror("Memory allocation fail\n");
		exit(1);
	}
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
//		if (filter == 1)
//		{
//			path = getpath(env);
//			childandparent(path, token);
		}
		status++;
//	free(buf);
//	free(token);
//	free(*path);
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
//	char *help_str, *history_str, *env_str, *setenv_str, *unsetenv_str;
	int switch_cmnd = 0;
	size_t i = 0;
	char *builtin_list[6];

	builtin_list[0] = "cd\n";
	builtin_list[1] = "help\n";
	builtin_list[2] = "exit\n";
	builtin_list[3] = "env\n";
	builtin_list[4] = "setenv\n";
	builtin_list[5] = "unsetenv\n";
	if (!token)
	{
		return (1);
	}
	else
	{
		for (; i < 7; i++)
		{
			if (_strcmp(token, builtin_list[i]) == 0)
			{
				switch_cmnd = i + 1;
			}
		}	
		switch (switch_cmnd)
		{
			case 1:
				printf("chdir switch case\n");
				chdir("..");
				return (0);

			case 2:
				printf("help function\n");
			//	helpfunc();
				return (0);
			case 3:
                        	exit(0);
/*
*	case 4:
*		env();
*		return (1);
*	case 5:
*		setenvironment();
*		return (1);
*	case 6:
*		unsetenvironment();
*		return (1);
*/
			default:
				perror("Command Not Found");
				break;
		}
	return (0);
	}
}
