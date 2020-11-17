/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** task04 my_evil_str
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

char *my_evil_str(char *str)
{
    int beginning, end, temp;

    beginning = 0;
    end = 0;
    while (str[end] != '\0') {
        end = end + 1;
    }
    while ( beginning != end ) {
        temp = beginning;
        beginning = end;
        end = temp;
        my_putchar(beginning);
        my_putchar(end);
        beginning = temp;
        temp = end;
        end = beginning;
    }
    
}

void main(void)
{
    *my_evil_str("hey");
}
