/*
** EPITECH PROJECT, 2025
** displaying
** File description:
** ht_dump.c
*/

#include "hashtable.h"

void ft_putstr(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
        write(1, &s[i], 1);
}

void ht_dump(hashtable_t *ht)
{
    struct node *temp = NULL;

    if (!ht)
        return;
    for (int i = 0; i < ht->len; i++) {
        temp = ht->hashtab[i];
        write(1, "[", 1);
        my_put_nbr(i);
        write(1, "]:\n", 3);
        while (temp != NULL) {
            write(1, "> ", 2);
            my_put_nbr(temp->h);
            write(1, " - ", 3);
            ft_putstr(temp->val);
            write(1, "\n", 1);
            temp = temp->next;
        }
    }
    return;
}
