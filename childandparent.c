#include "holberton.h"
/**
 * childandparent - forks child from parent
 * @path: input being checked
 * @token: arg vector for pid
 * Return: Process
 */
int childandparent(char *path, char **token)
{
	pid_t pid = fork();

	if (pid < 0)
		perror("Forking error\n")
			exit(EXIT_FAILURE);
	if (pid == 0)
		isachild();
		execve(path, token, paths);
	else
		isaparent();
	waitpid(childandparent, NULL, 0);
}
/**
 * isachild - checks if child process
 * Return: Output
 */
void isachild(void)
{
	int check = 0;

	for (; check == 0; check++)
		return (isachild);
}
/**
 * isaparent - checks if parent process
 * Returns: Output
 */
void isaparent(void)
{
	int check = 0;

	for (; check > 0; check--)
		return (isaparent);
}
