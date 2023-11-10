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
