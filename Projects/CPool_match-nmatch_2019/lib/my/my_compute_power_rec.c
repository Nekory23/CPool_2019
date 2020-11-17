/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** task04 my_compute_power_rec
*/

void my_putchar(char c);

int my_compute_power_rec(int nb, int p)
{
    long overflow;

    overflow = nb;
    if ( p == 0 )
        return (1);
    if ( p < 0 )
        return (0);
    overflow = overflow * my_compute_power_rec( nb , p - 1 );
    if ( overflow >= -2147483648 && overflow <= 2147483647 )
        return (overflow);
    else
        return (0);
    return (overflow);
}

