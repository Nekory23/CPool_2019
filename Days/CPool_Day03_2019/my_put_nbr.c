/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** task07 my_put_nbr
*/

int my_put_nbr(int nb)
{
    int number;
    char rest;

    number = nb;
    if ( nb == 0 ) {
        my_putchar('0');
    }
    while ( number != 0) {
        rest = number % 10;
        my_putchar(rest);
        number = number / 10;
    }    
}
