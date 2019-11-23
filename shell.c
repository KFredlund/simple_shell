#include "holberton.h"
#include <signal.h>
int _strcmp(char *s1, char *s2);
void cont_c_help();
int exec(char *args);
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
		if (_strcmp(buf, ex) == 0)
		{
			return (EXIT_SUCCESS);
		}
		else
		{
			token = strtok(buf, " ");
			status = exec(token);
/*			while (token)			
			{
				write(1, token, strlen(token) + 1);
				write(1, nl, strlen(nl) + 1);
				token = strtok(NULL, " ");
			}
			status++;
*/		}
	}
	free(buf);
	free(token);
//	for (i = 0, *token[i] != NULL; i++)
//		free(*token[i]);
	return (0);
	//execute args
	// free line
	// free args
}
/**
 * cont_c_help
 * 
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
 * exec - Execute command function
 * @args: arguments to execute
 * 
 * Return: number of args executed
 */
int filter(char *token)
{
	int i = 0, switch_cmnd = 0;
	char *builtin_list[6];

        builtin_list[0] = "cd";
        builtin_list[1] = "help";
        builtin_list[2] = "history";
        builtin_list[3] = "env";
        builtin_list[4] = "setenv";
        builtin_list[5] = "unsetenv";

	if (token[0] == NULL)
		return (1);
	for (; i < 6; i++)
	{
		if (_strcmp(token[0], builtin_list[i]))
		{
			switch_cmnd = i + 1;
			break;
		}
	}
	switch(switch_cmnd) 
	{
	case 1:
		chdir(token[1]);
		return (1);
	case 2:
		helpfunc();
		return (1);
	case 3:
		histfunc();
		return (1);
	case 4:
		environment();
		return (1);
	case 5:
		setenvironment();
		return (1);
	case 6:
		unsetenvironment();
		return (1);
	default:
		break;
	}
	return (0);
}
