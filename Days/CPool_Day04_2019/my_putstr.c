/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** task02 myputstr
*/    

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while ( str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

void main(void)
{
    my_putstr("Tout va bien");
}
        
