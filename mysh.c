/*
** EPITECH PROJECT, 2025
** mysh.c
** File description:
** recode of shell with no many functions
*/

#include "my.h"

int main(char **args)
{
    char *str;
    ssize_t len = 0;
    pid_t p = fork();

    while (1) {
        m_putstr("$> ");
        if (getline(&str, &len, stdin) == -1)
            exit(1);
        if (strcmp(str, "cd") == 0)
            chdir(str);
        if (strcmp(str, "exit\n") == 0)
            exit(0);
    }
    return 0;
}
