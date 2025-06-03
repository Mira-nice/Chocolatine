/*
** EPITECH PROJECT, 2024
** my_strcmp.c
** File description:
** Comparision between two strings
*/
#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int t = my_strlen(s1);
    int r = my_strlen(s2);
    int a = 0;

    if (t != r)
        return 84;
    for (; s1[a] != '\0' && s2[a] != '\0'; a++) {
        if (s1[a] == s2[a])
            continue;
        else
            return 84;
    }
    return 0;
}
