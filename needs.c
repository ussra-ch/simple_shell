#include "main.h"

/**
 * shell_strdup - duplicate a string
 * @str: the input
 * Return: ptr to the new string
*/
char *shell_strdup(const char *str)
{
	size_t len = strlen(str);
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);

	return (ptr);
}

/**
 * shell_strcmp - compares to strings
 * @str1: the first input
 * @str2: the second input
 * Return: positive num if str1>str2, 0 is both
 * are equal, negative num if str1<str2.
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

	if (str == NULL)
		return (0);
	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
 * shell_strcat - concatenate two strings
 * @dest: first input
 * @src: second input
 * Return: ptr to the new variable
*/
char *shell_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (result);
}

/**
 * shell_strcpy - copy one string to onother
 * @dest: string to be copied
 * @src: returned value
 *
 * Return: ptr to dest
*/
char *shell_strcpy(char *dest, char *src)
{
	int n = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = 0;
	return (dest);
}
