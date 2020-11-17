/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** task01 create a new list from the arguments of the function
*/

#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int nbr = ac;
    char *tmp;

    struct list * first = malloc(sizeof(char));
    first -> data -> av[nbr]; 
    next -> NULL;
    for (nbr = nbr - 1; nbr >= 0; nbr = nbr - 1) {
        struct list * tmp = malloc(sizeof(char));
        tmp -> data -> av[nbr];
        tmp -> next -> fisrt;
        first = tmp;
        tmp = NULL;
    }
}
