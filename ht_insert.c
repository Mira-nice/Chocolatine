/*
** EPITECH PROJECT, 2025
** ht_insert
** File description:
** insert an element in table
*/

#include "hashtable.h"

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int i = 0;
    int p = 0;
    struct node *n_node = (struct node *)malloc(sizeof(struct node));

    if (!n_node || !ht || !key || !value) {
        free(n_node);
        return 84;
    }
    i = ht->len;
    p = (ht->hash)(key, i) % i;
    n_node->h = (ht->hash)(key, i);
    n_node->key = my_strdup(key);
    n_node->val = my_strdup(value);
    n_node->next = ht->hashtab[p];
    ht->hashtab[p] = n_node;
    return 0;
}
