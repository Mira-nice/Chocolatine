/*
** EPITECH PROJECT, 2025
** my_strings_functions
** File description:
** All of my strings functions that i need for my project achievment.
*/

#include "my.h"

void m_putchar(char c)
{
    write(1, &c, 1);
}

int m_strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
    }
    return str[i];
}

void m_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        m_putchar(str[i]);
        i++;
    }
}

int m_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] || s2[i]) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return 0;
}
