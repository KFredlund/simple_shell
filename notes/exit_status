#include "holberton.h"
/**
* exit_status - Function that exits simple shell program
* @stat_val: Input to exit program
* Return: Never
*/
void exit_status(char *stat_val)
{

	while (stat_val == 0)
	{
		return (EXIT_SUCCESS);
	}
	if (stat_val == 2)
	{
		perror("Difficulty opening files\n");
		return (EXIT_FAILURE);
	}
	if (stat_val == 1)
	{
		perror("Files are different\n");
		return (EXIT_FAILURE);
	}
	return (0);
}
