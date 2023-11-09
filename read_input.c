#include "main.h"

/**
 * get_input_line - is responsible for reading a line
 * of text from the standard input.
 * Return: the user's input line as a dynamically allocated string.
 */

char *get_input_line(void)
{
        char *line = NULL;
        size_t len = 0;
        ssize_t nread;

        if (isatty(STDIN_FILENO))
                write(STDOUT_FILENO, "$ ", 2);
        nread = getline(&line, &len, stdin);
        if (nread == -1)
        {
                free(line);
                return (NULL);
        }
        return (line);
}