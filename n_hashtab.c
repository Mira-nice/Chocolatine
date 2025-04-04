/*
** EPITECH PROJECT, 2025
** generator of hashtables
** File description:
** n_hashtab.c
*/

#include "hashtable.h"

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *tab = (hashtable_t *)malloc(sizeof(hashtable_t));
    int i = 0;

    if (!tab || len <= 0) {
        free(tab);
        return NULL;
    }
    tab->len = len;
    tab->hash = hash;
    tab->hashtab = malloc(sizeof(struct node *) * len);
    if (!tab->hashtab)
        return NULL;
    for (i = 0; i < len; i++)
        tab->hashtab[i] = NULL;
    return tab;
}
