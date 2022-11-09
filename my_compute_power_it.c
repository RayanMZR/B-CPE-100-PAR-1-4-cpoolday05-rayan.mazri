/*
** EPITECH PROJECT, 2022
** my_compute_power_it
** File description:
** day5
*/

int my_compute_power_it(int nb , int p)
{
    int i = 1;
    int j = 0;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    while (j < p) {
        i = nb * i;
        j++;
    }
    return i;
}
