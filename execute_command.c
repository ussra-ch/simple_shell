Last login: Thu Nov  9 22:17:00 on ttys000
➜  ~ cd Downloads
➜  Downloads ls
0-positive_or_negative.c.swp
2023-6-19.zip
6.s096-january-iap-2013.zip
AndroidFileTransfer.dmg
Microsoft_Excel_16.65.22091101_Installer.pkg
Notion-2.1.2.dmg
Opera Installer.app
OperaSetup.zip
PlayOnMac_4.4.3.dmg
Quran
R-4.3.2-arm64.pkg
StressLevelDataset.xlsx
TD1.pdf
TP_Grp1.docx
Watch
WhatsApp Image 2023-11-08 at 11.32.47 PM.jpeg
Yousra Chatouane.pdf
Yousra Chatouane.png
[FASELHD][original]faselhd.The.Devils.Plan.S01E04.1080p.mp4.opdownload
automated_checker
automated_checker.zip
contrat.zip
copy
crackme3
devoir1.py
git-2.15.0-intel-universal-mavericks.dmg
images
jre-8u361-macosx-x64.dmg
libmy.a
lisence
pdfs
programs.c
serie_1_structure.c
shell
vars.zip
videos
zhar wmricha
➜  Downloads ls copy
➜  Downloads cd copy
➜  copy ls
➜  copy cd ..
➜  Downloads cd automated_checker
➜  automated_checker ls
README.md checker   run       tests
➜  automated_checker clear
#include "main.h"
#include "main.h"

/**
 * execute_command - function that execute the commands
 * @command: array of the command given
 * @argv: input
 *
 * Return: the exit status of the child process, -1 (error)
 */

int execute_command(char **commandArgs, char **argv)
{
        pid_t child;

        int status;

        child = fork();

        if (commandArgs == NULL || argv == NULL)
                return (-1);
        if (child == 0)
        {
                if (execve(commandArgs[0], commandArgs, environ) == -1)
                {
                        perror(argv[0]);
                        free_arr(commandArgs);
                        exit(-1);
                }
        }
        else
        {
                waitpid(child, &status, 0);
                free_arr(commandArgs);
        }
        return (WEXITSTATUS(status));
}
