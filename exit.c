#include "holberton.h"
/**
* exit - Function that exits a program
* @args: int var parameter
*
* Return: Never
*/
void exit(char *args)
{
	if (args == "exit")
		return (EXIT_SUCCESS);
}
