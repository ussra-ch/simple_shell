#include "main.h"
/**
* split_line - function that sptilts the line into words
* @line: ptr to the line
* Return: ptr to a variable containing the words of the line given
*/
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
                free(tmp), free(line);
                return (NULL);
        }
        if (tmp == NULL)
        {
                free(token), free(line);
                return (NULL);
        }
        while (token)
        {
                count++;
                token = strtok(NULL, EX);
        }
        free(tmp), command = malloc(sizeof(char *) * (count + 1));
        if (command == NULL)
        {
                free(command), free(line), free(token);
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
                        free_arr(command), free(line), free(token);
                        return (NULL);
                }
                token = strtok(NULL, EX), j++;
        }
        free(line), free(token);
        return (command);
}
}