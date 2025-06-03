/*
** EPITECH PROJECT, 2025
** my_strlen.c
** File description:
** count chartacters
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int a;

    for (a = 0; str[a] != '\0'; a++);
    return a;
}
