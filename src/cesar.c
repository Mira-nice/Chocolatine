/*
** EPITECH PROJECT, 2024
** open file
** File description:
** open
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "../include/my.h"

char value2(char c, int key, char l1, char l2)
{
    if ((c + key) < l1)
        return c + key + 26;
    else if ((c + key) > l2)
        return c + key - 26;
    else
        return c + key;
}

char value(char c, int key)
{
    if (c >= 'A' && c <= 'Z') {
        return value2(c, key, 'A', 'Z');
    } else {
        return value2(c, key, 'a', 'z');
    }
}

int alpha_chr(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

char *open_file(char const *filepath)
{
    struct stat d;
    char *str;
    int fd = open(filepath, O_RDONLY);

    if (fd == -1 || stat(filepath, &d) == -1)
        exit(84);
    if (d.st_size == 0)
        exit(84);
    str = malloc(d.st_size + 1);
    read(fd, str, d.st_size);
    str[d.st_size] = '\0';
    close(fd);
    return str;
}

char *decrypt_str(char *str, int key)
{
    int size = strlen(str);
    char *dest = malloc(sizeof(str) * (size + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        if (alpha_chr(str[i]))
            dest[i] = value(str[i], (key % 26));
        else
            dest[i] = str[i];
    }
    dest[size] = '\0';
    return dest;
}
