/**
 * allocation_help - memory allocation helper
 *
 *
 */

int buffsize = LSH_RL_BUFSIZE;
int location = 0, count = 0, parse;
char *buffer = malloc(sizeof(char) * buffsize);

/* checking if buffer allocates desired memory */
if (!buffer)
{
	bufferror();
}
/* loop while not exit */
while (count)
{
	count = open(buffer, O_RDONLY);
	if (count == -1)
	{
		return(0);
	}
	else if (parse = read(count, buffer);
		 }
/* check buffer space */
	if (location >= buffsize)
	{
		buffsize += LSH_RL_BUFSIZE;
		buffer = _realloc(buffer, buffsize);
		if (!buffer)
		{
			bufferror();
		}
	}
/**
 * free_help - free allocated memory
 *
 *
 */
