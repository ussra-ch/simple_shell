#include "main.h"

/**
 * execute_command - function that execute the commands
 * @commandArgs: array of string reprsenting the command given
 * @argv: An array of strings representing the program arguments.
 *
 * Return: the exit status of the child process, -1 (error)
 */
int execute_command(char **commandArgs, char **argv)
{
	pid_t child;

	int status;


	if (commandArgs == NULL || argv == NULL)

		return (-1);

	if (shell_strcmp(commandArgs[0], "exit") == 0)
	{
		free_arr(commandArgs);
		return (0);
	}
	child = fork();
	if (child == 0)
	{
		if (execve(commandArgs[0], commandArgs, environ) == -1)
		{
			perror(argv[0]);
			free_arr(commandArgs);

			exit(EXIT_FAILURE);
		}
	}
	else if (child > 0)
	{
		if (waitpid(child, &status, 0) == -1)
		{
			perror("waitpid");
			return (-1);

		}
		return (WEXITSTATUS(status));
	}
	else
	{
		perror("fork");
		return (-1);
	}
	return (-1);
}

