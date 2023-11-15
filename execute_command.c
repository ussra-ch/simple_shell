#include "main.h"

/**
 * execute_command - function that execute the commands
 * @commandArgs: array of string reprsenting the command given
 * @argv: An array of strings representing the program arguments
 * Return: the exit status of the child process, -1 (error)
 */
int execute_command(char **commandArgs, char **argv) /* , char **argv, int idx*/
{
	/*char *cmd;
	char p[] = "PATH";
	pid_t child;
	int status, check;

	check = shell_strcmp(commandArgs[0], p);
	 check if the input is PATH for task 3
	if (check == 0)
	{
		cmd = _getpath(commandArgs[0]);
		if (!cmd)
		{
			print_error(argv[0], commandArgs[0], idx), free_arr(commandArgs);
			return (0);
		}
	
	 Check if the entered command is "exit"
		if (shell_strcmp(commandArgs[0], "exit") == 0)
		{
			free(cmd);
			free_arr(commandArgs);
			return (0);
		}
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
	return (-1);*/
	pid_t pid = fork();
	int status;
	char *pa, *token, *dir;
    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) { /* Child process */
        char *args[64];
        int i = 0;

        token = strtok(commandArgs[0], " \t\n");

        while (token != NULL) {
            args[i++] = token;
            token = strtok(NULL, " \t\n");
        }

        args[i] = NULL;

        /* Check if the command includes a path separator '/' */
        if (strchr(args[0], '/') != NULL) {
            /* If it does, try to execute it directly */
            execv(args[0], args);
            perror("execv");
            exit(EXIT_FAILURE);
        }
	/* Get the PATH environment variable */
		pa = _getenv("PATH");
        if (pa == NULL) {
            perror("_getenv");
            exit(EXIT_FAILURE);
        }
        /* Tokenize the PATH */
        dir = strtok(pa, ":");
        while (dir != NULL) {
            /* Construct the full path to the executable */
            char full_path[256]; /* Adjust the size accordingly */
            snprintf(full_path, sizeof(full_path), "%s/%s", dir, args[0]);
            /* Check if the executable exists */
            if (access(full_path, X_OK) == 0) {
                execv(full_path, args);
                perror("execv");
                exit(EXIT_FAILURE);
            }
            dir = strtok(NULL, ":");
        }
        /* If the loop completes, the executable was not found */
        /* fprintf(stderr, "Command not found: %s\n", args[0]); */
		if (execve(commandArgs[0], commandArgs, environ) == -1)
			perror(argv[0]);
        exit(EXIT_FAILURE);
    } else { /* Parent proces */
        return (waitpid(pid, &status, 0));
    }
}

/**
 * free_arr - function frees 2D arrays
 * @arr: input
 */
void free_arr(char **arr)
{
	int i = 0;

	if (arr == NULL)
		return;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
