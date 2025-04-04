/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** to put a nbr
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    char ch;

    if (nb == -2147483648)
        write(1, "-2147483648", 11);
    else {
        if (nb < 0) {
            write(1, "-", 1);
            nb = -nb;
        }
        if (nb >= 10)
            my_put_nbr(nb / 10);
        ch = nb % 10 + 48;
        write(1, &ch, 1);
    }
    return 0;
}
