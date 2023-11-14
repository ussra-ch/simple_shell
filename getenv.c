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
	char *tmp, *key, *value, *env;
	int i;


	for (i = 0; environ[i]; i++)
	{
		tmp = shell_strdup(environ[i]);
		key = strtok(tmp, "=");
		if (shell_strcmp(key, variable) == 0)
		{
			value = strtok(NULL, "\n");
			env = shell_strdup(value);
			free(tmp);
			return (env);
		}
		free(tmp), tmp = NULL;
	}
	return (NULL);
}
