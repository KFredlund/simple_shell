#include "holberton.h"
/**
 * getenv - searches PATH for environment
 * @name: things it could be
 * @find: things it is
 * Return: Output
 */
char **getenv(const char *name, char **find)
{
	char **environ;
	char *env = *environ[name];
	char *grab = NULL;
	char path = "PATH";
	int gogetter = 0;
	int a = 0;

	find = strtok(path, ":");
	return (find);

	if (!env)
		return (NULL);
	if (name)
		add_node_end(&env, name);
	if (find)
	{
		gogetter = getpath(env);
		while (a < gogetter)
		{
			a++;
			grab = add_node(env, a)->ptr;
			while (name && find != '=')
			{
				if (find != grab)
					break;
			}
		}
	}
	return (env);
}
