
/*
** EPITECH PROJECT, 2019
** rush brouillon
** File description:
** brouillon
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c);

int my_put_nbr(int nb);

int rush2(int ac, char **av)
{
    int letter;
    int nb = 0;

    for (letter = 0; av[1][letter] != '\0'; letter = letter + 1) {
        if (av[1][letter] >= 'A' && av[1][letter] <= 'Z')
            av[1][letter] = av[1][letter] + 32;
        if (av[2][0] >= 'A' && av[2][0] <= 'Z')
            av[2][0] = av[2][0] + 32;
        if (av[2][0] == av[1][letter])
            nb = nb + 1;
    }
    my_put_nbr (nb);
    my_putchar ('\n');
}

int is_searchable(int ac, char **av)
{
    int ltr;
    int argc;

    if (ac < 3 || ac > 3) {
        write (2, "error number of arguments", 24);
        my_putchar ('\n');
        return (84);
    }
    for (ltr = 0; av[2][ltr] != '\0'; ltr++) {
        if (ltr > 0) { 
            write (2, "error, argument must be one letter", 36);
            my_putchar ('\n');
            return (84);
        }
    }
    if (av[2][0] >= 'a' && av[2][0] <= 'z' || av[2][0] >= 'A' && av[2][0] <= 'Z') {
        my_putchar (av[2][0]);
        my_putchar (':');
        rush2 (ac, av);
        return;
    }
    else {
        write (2, "error, argument must be a letter", 34);
        my_putchar ('\n');
        return (84);
    }
}

char main(int ac, char **av)
{
    is_searchable (ac, av);
}
