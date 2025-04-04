/*
** EPITECH PROJECT, 2025
** the search function
** File description:
** ht_search.c
*/

#include "hashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int i = 0;
    int j = 0;
    int p = 0;
    struct node *curr = NULL;

    if (!ht || !key)
        return NULL;
    j = ht->len;
    p = (*ht->hash)(key, j) % j;
    curr = ht->hashtab[p];
    while (curr != NULL) {
        if (my_strcmp(curr->key, key) == 0)
            return curr->val;
        curr = curr->next;
    }
    return NULL;
}
