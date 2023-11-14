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
void free_arr(char **arr);
int execute_command(char **command, char **argv, int idx);

/**
* split_line - function that sptilts the line into words
* @line: ptr to the line
* Return: ptr to a variable containing the words of the line given
*/
char **split_line(char *line);

/* All strings needs */
int shell_strlen(char *s); /* made */
int shell_strcmp(char *s1, char *s2); /* made */
char *starts_with(const char *haystack, const char *needle);
char *shell_strcat(char *dest, char *src); /* made */

char *shell_strcpy(char *dest, char *src); /* made */
char *shell_strdup(const char *str); /* made */
void shell_puts(char *str);
int shell_putchar(char c);

char *shell_strncpy(char *dest, char *src, int n);
char *shell_strncat(char *dest, char *src, int n);
char *shell_strchr(char *s, char c);

char **str_tokenize(char *str, const char *d);
char **str_tokenize_single(char *str, char del);

/* yousra's funtions*/
char *_getenv(char *variable);
char *_getpath(char *command);
char *str_int(int n);
void shell_reverse(char *str, int len);
void print_error(char *file_name, char *cmd, int i);

#endif
