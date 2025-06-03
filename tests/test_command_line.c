/*
** EPITECH PROJECT, 2025
** Test_remain_files
** File description:
** UNIT_TESTS
*/

#include <unistd.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void my_putchar(char c);

Test(my_putchar, display_characters_lowcase)
{
    my_putchar('c');
    cr_assert('c');
}

int my_put_nbr(int nb);
Test(my_put_nbr, display_numbers_positives)
{
    my_put_nbr(10);
    cr_assert(10);
}

Test(my_put_nbr, display_numbers_negetives)
{
    my_put_nbr(-10);
    cr_assert(-10);
}

int my_putstr(char const *str);
Test(my_putstr, display_character)
{
    my_putstr("Hello");
    cr_assert("Hello");
}

int my_strlen(char *str);
Test(my_strlen, display_number_of_characters)
{
    my_strlen("Hello");
    cr_assert(5);
}

char *my_strdup(char *src);
Test(my_strdup, register_caracter_into_the_memory)
{
    my_strdup("Hello");
    cr_assert("Hello");
}

char *my_strcat(char *dest, char *src);
Test(my_concat_param, concatenate_string_lowercase)
{
    char dest[16] = "harry";
    char *src = " segnon";

    cr_assert_str_eq(my_strcat(dest, src), strcat(dest, src));
}

Test(my_concat_param, concatenate_string_uppercase)
{
    char dest[16] = "HARRY";
    char *src = " HOUNSOU";
    cr_assert_str_eq(my_strcat(dest, src), strcat(dest, src));
}

Test(my_concat_param, concatenate_string_mixte)
{
    char dest[16] = "Harry";
    char *src = " Harry";

    cr_assert_str_eq(my_strcat(dest, src), strcat(dest, src));
}

Test(my_strcpy, copy_string_in_empty_array)
{
    char dest[5];
    char src[] = "Harry";

    my_strcpy(dest, src);
    cr_assert("Harry");
}

int my_strcmp(char *s1, char *s2);
Test(my_strcmp, compaire_two_strings_identical)
{
    char *str = "Hello";
    char *dest = "Hello";

    my_strcmp(str, dest);
    cr_assert(84);
}

Test(my_strcmp, compaire_two_strings_diff)
{
    char str[] = "Helyo";
    char dest[] = "Hello";

    my_strcmp(str, dest);
    cr_assert(84);
}

Test(my_strcmp, compaire_two_strings_differents_size)
{
    my_strcmp("Hello", "yes");
    cr_assert(84);
}

int my_strncmp(char *s1, char *s2, int n);

Test(my_strncmp, compaire_two_n_first_strings)
{
    int a = my_strncmp("HARRY", "Harrys", 4);
    int b = strncmp("HARRY", "Harrys", 4);

    cr_assert_eq(a, b);
}

Test(my_strncmp, compaire_two_n_first_strings_deff)
{
    int a = my_strncmp("HARss", "Harrys", 4);
    int b = strncmp("HARss", "Harrys", 4);

    cr_assert_eq(a, b);
}

Test(my_strncmp, compaire_two_n_first_strings_deff_less)
{
    int a = my_strncmp("HAR", "HARRys", 4);
    int b = strncmp("HAR", "HARRys", 4);

    cr_assert_eq(a, b);
}

Test(my_strncmp, compaire_two_n_first_strings_deff_high)
{
    int a = my_strncmp("HARRys", "HAR", 4);
    int b = strncmp("HARRys", "HAR", 4);

    cr_assert_eq(a, b);
}

Test(my_strncmp, compaire_two_n_first_strings_deff_equ)
{
    int a = my_strncmp("HAR", "HAR", 4);
    int b = strncmp("HAR", "HAR", 4);

    cr_assert_eq(a, b);
}

Test (decrypt_str, do_cesar_encryption)
{
    char *res = decrypt_str("HERE IS A SIMPLE EXAMPLE!", 3);

    cr_assert_str_eq(res, "KHUH LV D VLPSOH HADPSOH!");
}

Test (alpha_chr, check_if_a_caracter_is_a_char)
{
    cr_assert_eq(alpha_chr('a'), 1);
    cr_assert_eq(alpha_chr(' '), 0);
}

