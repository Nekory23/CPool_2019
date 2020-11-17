/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** task07 my_find_prime_sup
*/

void my_putchar(char c);

int my_find_prime_sup(int nb)
{
    int i,  next_prime;

    next_prime = nb;
    if ( nb <= 1 )
        return (2);
    for (i = 2; i <= next_prime; i = i + 1 ) {
        if ( next_prime % i == 0 && i != next_prime ) {
            next_prime = next_prime + 1;
        }
    }
    return (next_prime);
}

