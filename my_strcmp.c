/*
** EPITECH PROJECT, 2024
** my_strcmp.c
** File description:
** to compare two string
*/

#include "hashtable.h"

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    int j = 0;

    if (my_strlen(s1) != my_strlen(s2)) {
        j = my_strlen(s1) - my_strlen(s2);
        return j;
    }
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return 84;
    }
    return 0;
}
