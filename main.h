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
/* task 1&2 functions */
char *get_input_line(void);
char **split_line(char *line);
void free_arr(char **arr);
int execute_command(char **command, char **argv);

/* All strings needs */
int shell_strlen(char *s);
int shell_strcmp(char *s1, char *s2);
char *starts_with(const char *haystack, const char *needle);
char *shell_strcat(char *dest, char *src);

char *shell_strcpy(char *dest, char *src);
char *shell_strdup(const char *str);
void shell_puts(char *str);
int shell_putchar(char c);

char *shell_strncpy(char *dest, char *src, int n);
char *shell_strncat(char *dest, char *src, int n);
char *shell_strchr(char *s, char c);

char **strtow(char *str, char *d);
char **strtow2(char *str, char d);

/* yousra's funtions*/
char *_getenv(char *variable);

#endif
