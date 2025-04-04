/*
** EPITECH PROJECT, 2024
** test_secured
** File description:
** the unit test of the secured project
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../hashtable.h"

void redirect_all_std(void)
{
    cr_redirect_stderr();
}

Test(my_put_nbr, base)
{
    cr_redirect_stdout();
    my_put_nbr(225);
    cr_assert_stdout_eq_str("225");
}

Test(my_strcmp, suite)
{
    int i = my_strcmp("hello", "hello");
    int j = strcmp("hello", "hello");

    cr_redirect_stdout();
    cr_assert_eq(i, j);
}

Test(my_strdup, suite1)
{
    char *s = my_strdup("hello");
    char *s1 = strdup("hello0");

    cr_redirect_stdout();
    cr_assert_neq(s, s1);
}
