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
 * execute_command - function that execute the commands
 * @commandArgs: array of string reprsenting the command given
 * @argv: An array of strings representing the program arguments.
 *
 * Return: the exit status of the child process, -1 (error)
 */
int execute_command(char **commandArgs, char **argv, int idx)
{
	char *cmd;

	pid_t child;

	int status;

	cmd = _getpath(commandArgs[0]);
	if (!cmd)
	{
		print_error(argv[0], commandArgs[0], idx);
		free_arr(commandArgs);
		return (-1);
	}
	/* Check if the entered command is "exit" */
	if (shell_strcmp(commandArgs[0], "exit") == 0)
	{
		free(cmd);
		free_arr(commandArgs);
		return (0);
	}
	child = fork();
	if (child == 0)
	{
		if (execve(commandArgs[0], commandArgs, environ) == -1)
			perror(argv[0]), free_arr(commandArgs), exit(EXIT_FAILURE);
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

