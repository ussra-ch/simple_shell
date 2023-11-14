#include "main.h"

char **split_line(char *line)
{
	char *token = NULL, *tmp = NULL;
	char **command = NULL;
	int count = 0, i = 0, j = 0;

	if (line == NULL)
		return (NULL);
	tmp = strdup(line), token = strtok(tmp, EX);
	if (token == NULL)
	{
		free(tmp);
		return (NULL);
	}
	while (token)
	{
		count++;
		token = strtok(NULL, EX);
	}
	command = malloc(sizeof(char *) * (count + 1));
	if (command == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (i = 0; i <= count; i++)
		command[i] = NULL;
	token = strtok(line, EX);
	while (token)
	{
		command[j] = strdup(token);
		if (command[j] == NULL)
		{
			free(tmp);
			for (i = 0; i < j; i++)
				free(command[i]);
			free(command);
			return (NULL);
		}
		token = strtok(NULL, EX), j++;
	}
	free(tmp);
	return (command);
}
