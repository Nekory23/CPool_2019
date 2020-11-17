/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** task 02 my_print_revalpha
*/

int my_print_revalpha(void)
{
    char letter;

    letter = 'z';
    while (letter <= 'a') {
        my_putchar(letter);
        letter = letter - 1;
    }
}
