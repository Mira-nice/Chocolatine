/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** DISPLAYSMENT
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int my_putstr(char const *str)
{
    int d = 0;

    while (str[d] != '\0') {
        my_putchar(str[d]);
        d++;
    }
}
