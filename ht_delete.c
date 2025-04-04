/*
** EPITECH PROJECT, 2024
** ht_delete.c
** File description:
** delete a list element
*/

#include "hashtable.h"

void pre_ht_del(hashtable_t *ht, struct node *tmp,
    struct node *previous, int p)
{
    if (previous == NULL)
        ht->hashtab[p] = tmp->next;
    else
        previous->next = tmp->next;
    free(tmp->key);
    free(tmp->val);
    free(tmp);
}

int ht_delete(hashtable_t *ht, char *key)
{
    struct node *previous = NULL;
    struct node *tmp = NULL;
    int j = 0;
    int p = 0;

    if (!ht || !key)
        return 84;
    j = ht->len;
    p = (*ht->hash)(key, j) % j;
    tmp = ht->hashtab[p];
    while (tmp != NULL && my_strcmp(tmp->key, key) != 0) {
        previous = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL)
        return 84;
    pre_ht_del(ht, tmp, previous, p);
    return 0;
}
