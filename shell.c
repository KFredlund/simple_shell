#include "holberton.h"
int _strcmp(char *s1, char *s2);
void cont_c_help();
int filter(char *token);
/**
* main - Entry point, main function
*
* Return: 0 if success, else 1
*/
int main(void)
{
	char *buf, *line, *prompt = "Team Kati^2e Shell$ ";
	char *token, *ex = "exit\n", *nl = "\n";
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
		signal(SIGINT, cont_c_help);
		write(1, prompt, strlen(prompt) + 1);
		input = getline(&buf, &n, stdin);
		if (input == EOF)
		{
			write(1, "\n", 4);
			exit(1);
		}
		if (_strcmp(buf, ex) == 0)
		{
			return (EXIT_SUCCESS);
		}
		else
		{
			token = strtok(buf, " ");
			status = filter(token);
			status++;
		}
	}
	free(buf);
	free(token);
	return (0);
}
/**
 * cont_c_help - Function that exits a program with C^c signal
 *
 * Return: Never
 */
void cont_c_help()
{
	char *prompt2 = "\nTeam Kati^2e Shell$ ";

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
	char *cd_str, *help_str, *history_str, *env_str, *setenv_str, *unsetenv_str;
	int switch_cmnd = 0;
	size_t i = 0;
	char *builtin_list[6];

	builtin_list[0] = "cd";
	builtin_list[1] = "help";
	builtin_list[2] = "history";
	builtin_list[3] = "env";
	builtin_list[4] = "setenv";
	builtin_list[5] = "unsetenv";
	if (!token)
	{
		return (1);
	}
	else
	{
		for (; i < sizeof(builtin_list); i++)
		{
			printf("%lu = i loop\n", i);
			if (_strcmp(token, builtin_list[i]))
			{
				printf("inside built in check loop!!!\n");
				printf("switch cmnd before = %d\n", switch_cmnd);
				printf("*builtin_list[i] = %d\n", *builtin_list[i]);
				printf("*builtin_list = %s\n", *builtin_list);
				printf("builtin_list = %p\n", builtin_list);
				printf("builtin_list[i] = %s\n", builtin_list[i]);
				if (_strcmp(token, cd_str))
					switch_cmnd = *builtin_list[0];
				else
				{
					printf("switch cmnd after = %d\n", switch_cmnd);
					break;
				}
			}
			switch (switch_cmnd)
			{
				case 1:
					printf("chdir switch case\n");
					chdir("..");
					return (0);
/*
*	case 2:
*		helpfunc();
*		return (1);
*	case 3:
*		histfunc();
*		return (1);
*	case 4:
*		environment();
*		return (1);
*	case 5:
*		setenvironment();
*		return (1);
*	case 6:
*		unsetenvironment();
*		return (1);
*/
				default:
					printf("default switch cmnd\n");
					break;
			}
		return (0);
		}
	}
}
