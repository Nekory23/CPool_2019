/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** concat_params concatenates all parameters in str and display them
*/

#include <stdlib.h>

int my_putstr(char const *str);

void my_putchar(char c);

char *concat_params(int ac, char **av)
{
    int char_nb;
    int nbr = 0;
    char *str;
    int new_str;

    str = malloc(sizeof(char) * (ac + 1));
    while (nbr < ac) {
        for (char_nb = 0; av[nbr][char_nb] != '\0'; char_nb = char_nb + 1) {
            str[new_str] = av[nbr][char_nb];
            my_putchar (str[new_str]);
            new_str = new_str + 1;
        }
        my_putstr ("\n");  
        nbr = nbr + 1;
    }
    return (str);
    free (str);
}

int main(int ac, char **av)
{
    my_putstr(concat_params(ac, av));
    return (EXIT_SUCCESS);
}
