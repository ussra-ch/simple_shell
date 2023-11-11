#include "main.h"

/**
 * main - A main function for the simple shell
 * @argc: Argument count
 * @argv: Argiment valu
 *
 * Return: 0 Always (success)
 */

int main(int argc, char **argv) /*the same as they did in alx */
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
			free(line);
			return (exitStatus);
		}
		commandArgs = split_line(line);
		if (!commandArgs)
			continue;
		exitStatus = execute_command(commandArgs, argv);

		free(line);
	}
	return (0);
}
