/*
** EPITECH PROJECT, 2025
** main.c
** File description:
** main
*/

#include "../include/my.h"

int is_digits(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return 0;
    }
    return 1;
}

void put_in_file(char *res)
{
    int fd = 0;

    remove("crypt");
    fd = open("crypt", O_CREAT | O_WRONLY | O_TRUNC, 0444);
    dprintf(fd, "%s", res);
}

int main(int ac, char **av)
{
    char *res = NULL;
    char *str = NULL;

    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        usage();
        return 1;
    }
    if (ac == 4 && strcmp(av[1], "-f") == 0 && is_digits(av[3])) {
        str = open_file(av[2]);
        res = decrypt_str(str, atoi(av[3]));
        put_in_file(res);
        return 0;
    }
    if (ac == 4 && strcmp(av[1], "-s") == 0 &&
        strlen(av[2]) != 0 && is_digits(av[3])) {
        res = decrypt_str(av[2], atoi(av[3]));
        put_in_file(res);
        return 0;
    }
    return 84;
}
