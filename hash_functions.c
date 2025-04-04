/*
** EPITECH PROJECT, 2025
** hash functions
** File description:
** hash function
*/

#include "hashtable.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int c = 0;

    for (i = 0; str[i] != '\0'; i++)
        c = c + str[i];
    return c;
}

int hash(char *key, int len)
{
    int n_key = 0;
    int results = 5381;

    if (key == NULL || *key == '\0' || len <= 0)
        return 84;
    n_key = my_getnbr(key);
    results = n_key * n_key * n_key * n_key;
    results = results ^ (results * 33);
    if (results < 0)
        results = -results;
    if (results > 1000000000)
        while (results > 1000000000)
            results /= 31;
    return results;
}
