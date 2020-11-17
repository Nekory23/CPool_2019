/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_strncat concatenate n characters at the end of another str
*/

char my_strncat(char *dest, char *src, int n)
{
    int nbr = 0;

    while (dest[nbr] != '\0')
        nbr = nbr + 1;
    for (int i = 0; src[i] != src[n]; i++) {
        dest[nbr] = src[i];
        nbr = nbr + 1;
    }
    dest[nbr] = '\0';
    return (dest);
}
