/*
** EPITECH PROJECT, 2024
** my_strcat.c
** File description:
** STRING-CONCATENATION
*/

#include "../include/my.h"

char *my_strcat(char *dest, char *src)
{
    int a = 0;
    int b = 0;
    char *result = dest;

    while (result[a] != '\0') {
        a++;
    }
    while (src[b] != '\0') {
        result[a] = src[b];
        a++;
        b++;
    }
    result[a] = '\0';
    return result;
}
