#include "holberton.h"
/**
* main - Entry point, main function
*
* Return: 0 if success, else 1
*/
int main(void)
{
/* if buffer mallocs */
	char *prompt = "Team Kati^2e Shell $";
	int status = 0;
	char *line[1000];
	
	while (status < 2)
	{
		write(1, prompt, strlen(prompt) + 1);
		read(0, line, 1000);	
		status++;
	}
	return (0);
	//getline
/* call to strtok function */
	//execute args
	// free line
	// free args
}
