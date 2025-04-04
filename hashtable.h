/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>

struct node {
    int h;
    char *key;
    char *val;
    struct node *next;
};

typedef struct hashtable_s {
    int len;
    int (*hash)(char *, int);
    struct node **hashtab;
} hashtable_t;

// Hash function
int hash(char *key, int len);

// Create & destro table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

// Handle table
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

// my functions
int my_put_nbr(int nb);
void ft_putstr(char *s);
char *my_strdup(const char *str);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
#endif
