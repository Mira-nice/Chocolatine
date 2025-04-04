/*
** EPITECH PROJECT, 2025
** d_hashtab.c
** File description:
** delete hashtable
*/

#include "hashtable.h"

void pre_del(struct node *node)
{
    struct node *tmp = NULL;

    while (node != NULL) {
        tmp = node;
        node = node->next;
        free(tmp->key);
        free(tmp->val);
        free(tmp);
    }
}

void delete_hashtable(hashtable_t *ht)
{
    int i = 0;

    if (ht == NULL)
        return;
    for (i = 0; i < ht->len; i++) {
        if (ht->hashtab[i] != NULL)
            pre_del(ht->hashtab[i]);
    }
    free(ht->hashtab);
    free(ht);
    return;
}
