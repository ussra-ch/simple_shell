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

/**
 * shell_strcat - concatenate two strings
 * @str1: first input
 * @str2: second input
 * Return: ptr to the new variable
*/
char *shell_strcat(char *str1, char *str2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;

	char *r;

	while (str1[len1])
		len1++;
	while (str2[len2])
		len2++;
	r = malloc(sizeof(char) * (len1 + len2));
	if (r == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		r[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		r[i] = str2[j];
		i++, j++;
	}
	r[i] = '\0';
	return (r);
}








