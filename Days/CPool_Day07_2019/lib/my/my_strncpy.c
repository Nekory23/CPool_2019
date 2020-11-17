/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** task02 my_strncpy
*/

void my_putchar(char c);

char *my_strncpy(char *dest, char const *src, int n)
{
    int nbr = 0;
    int i;
    int j;
    
    for ( i = 0; src[i] != '\0'; i = i + 1) {
        nbr = nbr + 1;
    }
    if (n < nbr) {
        for (j = 0; j < n; j = j + 1) {
            dest[j] = src[j];
        }
        dest[j + 1] = '\0';
        return (dest);
    }
    else if (n == nbr) {
        for (j = 0; j < n; j = j + 1) {
            dest[j] = src[j];
        }
        dest[j + 1] = '\0';
        return (dest);
    }
    else {
        for (j = 0; j < n; j = j + 1) {
            dest[j] = src[j];
        }
        return (0);
    }
}
