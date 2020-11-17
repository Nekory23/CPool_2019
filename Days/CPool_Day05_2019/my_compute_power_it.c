/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** task03 my_compute_power_it
*/

void my_putchar(char c);

int my_compute_power_it(int nb, int p)
{
    int i;
    long overflow;
    
    overflow = nb;
    if ( p == 0 ) 
        return (1);
    if ( p < 0 )
        return (0);
    for ( i = 1; i < p; i = i + 1) {
        overflow = overflow * nb;
    }
    if ( overflow >= -2147483648 && overflow <= 2147483647 ) {
        return (overflow);
    }
    else
        return (0);
    return (overflow);
}

