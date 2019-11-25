#include "holberton.h"
/**
 * bufferror - Message for buffer allocation failure
 * Return: Output message
 */
int bufferror(void)
{
	if (!buffer)
	{
		perror("Buffer allocation failure\n");
		exit(EXIT_FAILURE);
	}
}
