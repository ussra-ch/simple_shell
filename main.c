#include "main.h"

/**
 * main - A main function for the simple shell
 * @argc: Argument count
 * @argv: Argiment valu
 *
 * Return: 0 Always (success)
 */

int main(int argc, char **argv)
{
	char *line = NULL;
	char **commandArgs = NULL;
	int exitStatus = 0;
	(void) argc;

	while (1)
	{
		line = get_input_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (exitStatus);
		}

		commandArgs = split_line(line);
		if (!commandArgs)
		{
			free(line);
			continue;
		}

		exitStatus = execute_command(commandArgs, argv);

		free(line);
		free_arr(commandArgs);
	}
	return (0);
}
