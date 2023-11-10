#include "main.h"

/**
 * shell_strlen - Return the length of a string.
 * @s: A string to calculate the length of.
 *
 * Return: the length of the string.
 */
int shell_strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/***/
int shell_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((*s1 > *s2) ? 1 : -1);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		return ((*s1 > *s2) ? 1 : -1);
}
