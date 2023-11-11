#include "main.h"

/**
 * free_arr - function frees 2D arrays
 * @arr: input
 */

void free_arr(char **arr)
{
	int i = 0;

	if (arr == NULL)
		return;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
/**
 * shell_strdup - duplicate a string
 * @str: the input
 * Return: ptr to the new string 
*/
char *shell_strdup(const char *str)
{
	char *ptr;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	ptr = malloc(sizeof(char) * (len + 1)); 
	for (i = 0; i <= len; i++)
			ptr[i] = str[i];
	return (ptr);
}
/**
 * shell_strcmp - compares to strings
 * @str1: the first input
 * @str2: the second input
 * Return: positive num if str1>str2, 0 is both are equal, negative num if str1<str2 
*/
int shell_strcmp(char *str1, char *str2)
{
	int r;
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return ((int)*str1 - (int)*str2);
}

/**
 * shell_strlen - calculates the length of a string
 * @str: input
 * Return: the length of the input
*/
int shell_strlen(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}













