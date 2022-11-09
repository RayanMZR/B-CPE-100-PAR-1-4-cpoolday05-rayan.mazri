/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it
** File description:
** day5
*/

int my_compute_factorial_it(int nb)
{
    int i = 1;
    int j = nb;

    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    while (j > i) {
        nb *= j - i;
        i++;
    }
    return nb;
}
