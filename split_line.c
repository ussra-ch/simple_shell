#include "main.h"

/**
 * count_tokens - Count the number of tokens in a string
 * @str: The input string.
 *
 * Return: The number of token in the string.
 */
int count_tokens(char *str)
{
	char *token, *tmp;
	int count = 0;

	tmp = strdup(str);
	if (tmp == NULL)
		return (-1);

	token = strtok(tmp, EX);
	while (token)
	{
		count++;
		token = strtok(NULL, EX);
	}
	free(tmp);
	return (count);
}

/**
 * allocate_char_array - Allocate and initialize a char array.
 * @size: The size of the array.
 *
 * Return: A dynamically allocated char array.
 */
char **allocate_char_array(int size)
{
	char **arr = malloc(sizeof(char *) * size);
	int i;

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = NULL;

	return (arr);
}

/**
 * free_char_array - Free a char array
 * @arr: The cjhar array to free.
 * @size: the size of the array.
 */
void free_char_array(char **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(arr[i]);
	free(arr);
}

/**
 * split_line - Split a line into tokens.
 * @line: the input line.
 *
 * Return: An array of token.
 */
char **split_line(char *line)
{
	int count = count_tokens(line);
	char **command = allocate_char_array(count + 1);
	char *token = strtok(line, EX);
	int j = 0;

	if (line == NULL)
		return (NULL);
	if (count == -1)
		return (NULL);
	if (command == NULL)
		return (NULL);
	while (token)
	{
		command[j] = strdup(token);
		if (command[j] == NULL)
		{
			free_char_array(command, j);
			return (NULL);
		}
		token = strtok(NULL, EX);
		j++;
	}
	return (command);
}
