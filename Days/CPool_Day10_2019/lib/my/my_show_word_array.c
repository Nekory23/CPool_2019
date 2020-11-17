/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** task03 my_show_word_array display an array of words
*/

#include <stddef.h>

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int nbr;

    for (nbr = 0; tab[nbr] != NULL; nbr = nbr + 1) {
        my_putstr(tab[nbr]);
        my_putstr("\n");
    }
    return (0);
}
