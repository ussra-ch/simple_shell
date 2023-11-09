#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

#define EX " \t\n"
extern char **environ;

/* All prototypes */
char *get_input_line(void);
char **split_line(char *line);
void free_arr(char **arr);
int execute_command(char **command, char **argv);

/* All strings */


#endif
