/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** task05 my_compute_square_root
*/

void my_putchar(char c);

int my_compute_square_root(int nb)
{
    int result;

    if ( nb < 0 )
        return (0);
    for ( result = 0; result < nb; result = result + 1 )
    {
        if ( result * result == nb )
            return (result);
        if ( result * result > nb ) {
            result = 0;
            return (result);
        }
    }
    return (result);
}
