#include "main.h"

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
	/* Calculate the length of the string */
	while (str[len])
		len++;
	/* Allocate memory for the new string (+1 for null terminator) */
	ptr = malloc(sizeof(char) * (len)); /*it was len+1*/
	if (ptr == NULL)
		return (NULL);
	/* Copy characters from str to ptr */
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	/* Add null terminator to the end of the duplicated string */
	ptr[len] = '\0';
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
char *shell_strcat(char *dest, char *src)
{
	char *result = dest;

<<<<<<< HEAD
	while (str1[len1])
		len1++;
	while (str2[len2])
		len2++;
	r = malloc(sizeof(char) * (len1 + len2 + 1));/*added 1 to solve the error*/
	if (r == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		r[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
=======
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
>>>>>>> a3df83e01b4e742745bcac2d7d6d24081d915d05
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';
	return (result);
}

/**
 * shell_strcpy - copy one string to onother
 * @src: string to be copied
 * @dest: returned value
 *
 * Return: ptr to dest
*/
char *shell_strcpy(char *src, char *dest)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
