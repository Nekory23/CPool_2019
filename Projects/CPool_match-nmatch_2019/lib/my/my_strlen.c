/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** task03 my_strlen
*/

int my_put_nbr(int nb);

int my_strlen(char const *str)
{
    int c = 0;
    int i = 0;
    
    while (str[i] != '\0') {
        c = c + 1;
        i = i + 1;
    }
    my_put_nbr(i);
}

void main(void)
{
    my_strlen("hello");
}


