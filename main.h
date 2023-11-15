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
int execute_command(char **command, char **argv, int idx);

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

char *get_env(char *variable);
char *get_path(char *command);
char *str_int(int n);
void shell_reverse(char *str, int len);
void print_error(char *file_name, char *cmd, int i);

#endif