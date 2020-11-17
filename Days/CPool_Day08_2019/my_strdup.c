/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_strdup copies the string given as argument and returns a pointer to it
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int nbr = 0;
    int j;
    char *str;

    while (src[nbr] != '\0') {
        nbr = nbr + 1;
    }
    str = malloc(sizeof(char) * (nbr + 1));
    for (j = 0; src[j] != '\0'; j++) {
        str[j] = src[j];
    }
    str[j] = '\0';
    return (str);
    free (str);
}
