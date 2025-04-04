/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** to duplicate a string
*/

#include "hashtable.h"

char *my_strdup(const char *str)
{
    char *dup;
    int i = 0;

    if (str == NULL) {
        return NULL;
    }
    for (; str[i] != '\0'; i++);
    dup = (char *)malloc(sizeof(char) * i + 1);
    if (dup == NULL) {
        return NULL;
    }
    my_strcpy(dup, str);
    return dup;
}
