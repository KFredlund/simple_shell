/**
 * _strtok - extracts tokens from strings
 * @str: string being checked
 * @delim: seperates tokens in parsed string
 * Return: Output
 */
char **_strtok(char *str, char *delim)
{
	int x, y, z;
	char **token = NULL;
	int number = 0, checker = 0;

	while (!(number = _strlen(str, delim)))
		return (NULL);
	token = _calloc((number + 1) sizeof(char *), NULL);
	if (token == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] || number)
	{
		for (y = 0; delim[y]; y++)
		{
			if ((!str[x]) || (str[x] == delim[y]))
				checker++;
			if (number != '\0')
			{
		token[counter] = _calloc(sizeof(char) * (number + 1), NULL);
		if (!token[counter])
		{
			free(token);
			return (NULL);
		}
		while (number)
			number--;
		z++;
		token[counter][z] = str[y - length];
			}
		}
		if (!checker)
			number++;
	}
	token[counter] = NULL;
	return (token);
}
