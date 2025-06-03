/*
** EPITECH PROJECT, 2024
** my_strdup.c
** File description:
** MEMORY ALLOCATION AND STRING COPING
*/

#include "../include/my.h"

char *my_strdup(char *src)
{
    int a;
    int j;
    char *str;

    j = my_strlen(src);
    str = malloc((sizeof(char) * j) + 1);
    for (int a = 0; a <= j; a++) {
        str[a] = src[a];
    }
    str[j] = '\0';
    return str;
}
