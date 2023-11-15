#include "main.h"

/**
 * _getenv - Retrieves the value of an environment variable.
 * @variable: Pointer to a string representing the
 * environment variable to search for.
 *
 * Return: Pointer to the value of the environment variable on success,
 * otherwise NULL.
 */

char *_getenv(char *variable)
{
	char *tmp, *key, *val, *env;

	int i;

	for (i = 0; environ[i]; i++)
	{
		tmp = shell_strdup(environ[i]);
		key = strtok(tmp, "=");
		if (shell_strcmp(key, variable) == 0)
		{
			val = strtok(NULL, "\n");
			env = shell_strdup(val);
			free(tmp);
			return (env);
		}
		free(tmp);
	}
	return (NULL);
}
