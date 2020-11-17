/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** task03 my_print_digits.c
*/

int my_print_digits(void)
{
    char number;

    number = '0';
    while (number <= '9') {
        my_putchar(number);
        number = number + 1;
    }
}
