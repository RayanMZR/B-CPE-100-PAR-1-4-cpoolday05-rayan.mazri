/*
** EPITECH PROJECT, 2022
** my_compute_factoral_rec
** File description:
** day5
*/

int my_compute_factorial_rec(int nb)
{
    int i;

    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    i = nb * my_compute_factorial_rec(nb - 1);
    return i;
}
