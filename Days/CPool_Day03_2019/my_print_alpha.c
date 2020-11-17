/*
** EPITECH PROJECT, 2019
** CPool_Day03_2019
** File description:
** task01 my_print_alpha
*/

int my_print_alpha(void)
{
    int letter;

    letter = 97;
    while (letter <= 122) {
        my_putchar(letter);
        letter = letter + 1;
    }
}
