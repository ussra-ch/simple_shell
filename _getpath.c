#include "main.h"
/* not completed yet*/
char *_getpath(char *command)
{
    char *path_env, *full_cmd, *dir;

    struct  stat st;

    int i;

    for (i = 0; command[i]; i++)
    {
        if (command[i] == '/')
        {
            if (stat(command, &st) == 0)
                return (shell_strdup(command));
            return (NULL);
        }
    }
    path_env = _getenv("PATH");
    if (!path_env)
        return (NULL);
    dir = strtok(path_env, ":");
    /* example: /bin/ls*/
    /* /bin = dir; / = 1; ls = command; \0 = 1*/
    full_cmd = malloc(shell_strlen(dir) + shell_strlen(command) + 2);
    if (full_cmd)
    {
        shell_strcpy(full_cmd, dir), shell_strcat(full_cmd, "/");
        shell_strcat(full_cmd, command);
        if (stat(full_cmd, &st) == 0)
        {
            free(path_env);
            return (full_cmd);  
        }
        free(full_cmd);
        dir = strtok(NULL, ":");
    }
    free(path_env);
    return (NULL);
}
