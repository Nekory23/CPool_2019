/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** task01 my_compute_factorial_it
*/

void my_putchar(char c);

int my_compute_factorial_it(int nb)
{
    int result, i;
    
    result = 1;
    if ( nb == 0 ) 
        return (1);
    if ( nb < 0 || nb >= 13 ) 
        return (0);
    for ( i = 1; i <= nb; i = i + 1) {
        result = result * i;
    }
    return (result);
}
