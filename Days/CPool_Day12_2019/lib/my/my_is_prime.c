/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** task06 my_is_prime
*/

void my_putchar(char c);

int my_is_prime(int nb)
{
    int i;

    if ( nb <= 1 )
        return (0);
    for ( i = 2; i <= nb; i = i + 1 ) {
        if ( nb % i == 0 && i != nb )
            return (0);
    }
    return (1);
}
