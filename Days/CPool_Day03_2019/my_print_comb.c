/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** task05 my_print_comb
*/

int my_print_comb(void)
{
    int unit, tens, hundreds;

    unit = '0';
    tens = '0';
    hundreds =  '0';
    while ( hundreds != '7' )
    {
        unit = unit + 1;
        if ( unit < '9' ) {
            unit = unit + 1;
        }
        tens = tens +1;
        if ( tens < '9' ) {
            tens = tens + 1;
        }
        hundreds = hundreds + 1;
        if ( hundreds < '7') {
            hundreds = hundreds + 1;
        }
        my_putchar( hundreds );
        my_putchar( tens );
        my_putchar( unit );
        my_putchar( ' ' );
        unit = '0';
        tens = '0';
    }
}
    
