/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** task02 my_compute_factorial_rec
*/

void my_putchar(char c);

int my_compute_factorial_rec(int nb)
{
    int res;

    if ( nb == 0 ) {
        return (1);
    }
    if ( nb < 0 || nb >= 13 ) {
        return (0);
    }
    res = ( nb * my_compute_factorial_rec( nb - 1 ));
    return (res);    
}
