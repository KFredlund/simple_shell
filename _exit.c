#include "holberton.h"
/**
* _exit - Function that exits a program
* @args: int var parameter
*
* Return: Never
*/
void _exit(char *args)
{
	if (args == "exit")
		return (EXIT_SUCCESS);
}
