#include "main.h"

/**
 * execute_command - function that execute the commands
 * @command: array of the command given
 * @argv: input
 *
 * Return: the exit status of the child process, -1 (error)
 */

int execute_command(char **commandArgs, char **argv)
{
	pid_t child;

	int status;

	child = fork();

	if (commandArgs == NULL || argv == NULL)
		return (-1);
	if (child == 0)
	{
		if (execve(commandArgs[0], commandArgs, environ) == -1)
		{
			perror(argv[0]);
			free_arr(commandArgs);
			exit(-1);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		free_arr(commandArgs);
	}
	return (WEXITSTATUS(status));
}
