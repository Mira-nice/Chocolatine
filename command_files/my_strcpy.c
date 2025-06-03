/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** Copy string into another
*/
#include "../include/my.h"

char *my_strcpy(char *dest, char *src)
{
    int a;

    for (a = 0; src[a] != '\0'; a++)
        dest[a] = src[a];
    dest[a] = '\0';
    return dest;
}
