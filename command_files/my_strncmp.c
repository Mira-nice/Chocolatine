/*
** EPITECH PROJECT, 2024
** my_strncmp.c
** File description:
** Copy string into another
*/
#include "../include/my.h"

int my_strncmp(char *s1, char *s2, int n)
{
    int a = 0;

    for (; a < n && s1[a] != '\0' && s2[a] != '\0'; a++) {
        if (s1[a] != s2[a])
            return (s1[a] - s2[a]);
    }
    if (a < n) {
        if (s1[a] != '\0')
            return (s1[a]);
        if (s2[a] != '\0')
            return (-1 * s2[a]);
    }
    return 0;
}
