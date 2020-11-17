/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** task03 my_strlen
*/

int my_strlen(char const *str)
{
    int i;
    int c;

    i = 0;
    c = 0;
    while (str[i] != '\0') {
        c = c + 1;
        i = i + 1;
    }
    return (0);
}



