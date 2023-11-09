
~

#include "main.h"
#include "main.h"
#include "main.h"
/**
{
#include "main.h"
#include "main.h"
#include "main.h"
#include "main.h"

/**
* split_line - function that sptilts the line into words
* @line: ptr to the line
* Return: ptr to a variable containing the words of the line given
*/

char **split_line(char *line)
{
Last login: Thu Nov  9 10:25:53 on ttys001
➜  ~ cd Downloads
➜  Downloads cd shell
➜  shell ls
simple_shell
➜  shell cd simple_shell
➜  simple_shell git:(master) ls
README.md
➜  simple_shell git:(master) vim execute_command.c
➜  simple_shell git:(master) ✗ vim execute_command.c
➜  simple_shell git:(master) ✗ vim needs.c
#include "main.h"

/**
* split_line - function that sptilts the line into words
* @line: ptr to the line
* Return: ptr to a variable containing the words of the line given
*/

char **split_line(char *line)

/**
* split_line - function that sptilts the line into words
* @line: ptr to the line
➜  simple_shell git:(master) ✗ vim split_line.c
➜  simple_shell git:(master) ✗ ls
README.md         execute_command.c needs.c           split_line.c
➜  simple_shell git:(master) ✗ chmod u+x *.c
➜  simple_shell git:(master) ✗ betty-style needs.c
needs.c:10: ERROR: code indent should use tabs where possible
#include "main.h"
needs.c:10: WARNING: please, no spaces at the start of a line
needs.c:12: ERROR: code indent should use tabs where possible
needs.c:12: WARNING: please, no spaces at the start of a line
needs.c:13: ERROR: code indent should use tabs where possible
needs.c:13: WARNING: please, no spaces at the start of a line
needs.c:14: ERROR: code indent should use tabs where possible
needs.c:14: WARNING: please, no spaces at the start of a line
needs.c:15: ERROR: code indent should use tabs where possible
needs.c:15: WARNING: please, no spaces at the start of a line
needs.c:16: ERROR: code indent should use tabs where possible
needs.c:16: WARNING: please, no spaces at the start of a line
needs.c:17: ERROR: code indent should use tabs where possible
needs.c:17: WARNING: please, no spaces at the start of a line
needs.c:18: ERROR: code indent should use tabs where possible
needs.c:18: WARNING: please, no spaces at the start of a line
needs.c:19: ERROR: code indent should use tabs where possible
needs.c:19: WARNING: please, no spaces at the start of a line
needs.c:20: ERROR: code indent should use tabs where possible
needs.c:20: WARNING: please, no spaces at the start of a line
needs.c:21: ERROR: code indent should use tabs where possible
needs.c:21: WARNING: please, no spaces at the start of a line
needs.c:22: ERROR: code indent should use tabs where possible
needs.c:22: WARNING: please, no spaces at the start of a line
this project is made by Yousra Chatouane and Kaltoum chbiki
1. Simple shell 0.1
mandatory
Write a UNIX command line interpreter.

Usage: simple_shell
Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)
You don’t have to:

use the PATH
implement built-ins
handle special characters : ", ', `, \, *, &, #
be able to move the cursor
handle commands with arguments
execve will be the core part of your Shell, don’t forget to pass the environ to it…

julien@ubuntu:~/shell$ ./shell
#cisfun$ ls
./shell: No such file or directory
#cisfun$ /bin/ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ /bin/ls -l
./shell: No such file or directory
#cisfun$ ^[[D^[[D^[[D
./shell: No such file or directory
#cisfun$ ^[[C^[[C^[[C^[[C
./shell: No such file or directory
#cisfun$ exit
./shell: No such file or directory
#cisfun$ ^C
julien@ubuntu:~/shell$ echo "/bin/ls" | ./shell
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ julien@ubuntu:~/shell$

2. Simple shell 0.2
mandatory
Simple shell 0.1 +

Handle command lines with arguments

3. Simple shell 0.3
mandatory
Simple shell 0.2 +

Handle the PATH
fork must not be called if the command doesn’t exist
julien@ubuntu:~/shell$ ./shell_0.3
:) /bin/ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
:) ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
:) ls -l /tmp
total 20
-rw------- 1 julien julien    0 Dec  5 12:09 config-err-aAMZrR
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV
drwx------ 3 root   root   4096 Dec  5 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH
-rw-rw-r-- 1 julien julien    0 Dec  5 12:09 unity_support_test.0
:) ^C
julien@ubuntu:~/shell$

4. Simple shell 0.4
mandatory
Simple shell 0.3 +

Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit

5. Simple shell 1.0
mandatory
Simple shell 0.4 +

Implement the env built-in, that prints the current environment
julien@ubuntu:~/shell$ ./simple_shell
$ env
USER=julien
LANGUAGE=en_US
SESSION=ubuntu
COMPIZ_CONFIG_PROFILE=ubuntu
SHLVL=1
HOME=/home/julien
C_IS=Fun_:)
DESKTOP_SESSION=ubuntu
LOGNAME=julien
TERM=xterm-256color
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
DISPLAY=:0
$ exit
julien@ubuntu:~/shell$

6. Simple shell 0.1.1
#advanced
Simple shell 0.1 +

Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline
You don’t have to:

be able to move the cursor
Repo:

GitHub repository: simple_shell

7. Simple shell 0.2.1
#advanced
Simple shell 0.2 +

You are not allowed to use strtok

8. Simple shell 0.4.1
#advanced
Simple shell 0.4 +

handle arguments for the built-in exit
Usage: exit status, where status is an integer used to exit the shell
julien@ubuntu:~/shell$ ./shell_0.4.1
$ exit 98
julien@ubuntu:~/shell$ echo $?
98

9. setenv, unsetenv
#advanced
Simple shell 1.0 +

Implement the setenv and unsetenv builtin commands

setenv
Initialize a new environment variable, or modify an existing one
Command syntax: setenv VARIABLE VALUE
Should print something on stderr on failure
unsetenv
Remove an environment variable
Command syntax: unsetenv VARIABLE
Should print something on stderr on failure
Repo:

GitHub repository: simple_shell

10. cd
#advanced
Simple shell 1.0 +

Implement the builtin command cd:

Changes the current directory of the process.
Command syntax: cd [DIRECTORY]
If no argument is given to cd the command must be interpreted like cd $HOME
You have to handle the command cd -
You have to update the environment variable PWD when you change directory
man chdir, man getcwd

