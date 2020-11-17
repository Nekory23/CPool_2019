/*
** EPITECH PROJECT, 2019
** CPool_Tree_2019
** File description:
** tree
*/

void my_putchar(char c);

void count(int size)
{
    int branch_nbr = size + 3;
    int last_line = 1;
    int middle;
    int i;
    int star_nbr = 1;

    for (i = 1; i < branch_nbr; i++) {
        last_line = last_line + 2;
    }
    middle = (last_line / 2) + 1;
    for (i = 0; i <= branch_nbr; i++) {
        if ( i == 1 ) 
            branch (size, branch_nbr, star_nbr, middle);
        else {
            star_nbr = star_nbr + 2;
            branch (size, branch_nbr, star_nbr, middle);
        }
        
    }
    trunk (size, middle);
}

void branch(int size, int branch_nbr, int star_nbr, int middle)
{
    int i;
    int j;

    for (i = 0; i <= branch_nbr; i++) {
        for (j = 0; j <= middle; j++) {
            my_putchar (' ');
            middle--;
        }
        for (j = 0; j <= star_nbr; j++) {
            my_putchar ('*');
        }
        my_putchar ('\n');
    }
}

int trunk(int size, int middle)
{
    int trunk_width;
    int line = 0;
    int i;

    if (size == 1) {
        for (i = 0; i < middle; i++) {
            my_putchar (' ');
        }
        my_putchar ('|');
        my_putchar ('\n');
        return (0);
    }
    while (line < size) {
        if ( size % 2 == 0) {
            for (trunk_width = 0; trunk_width < size; trunk_width++) {
                my_putchar ('|');
            }
        } else {
            for (trunk_width = 0; trunk_width <= size; trunk_width++) {
                my_putchar ('|');
            }
        }
        my_putchar ('\n');
        line = line + 1;
    }
    return (0);
}

void tree(int size)
{
    if (size <= 0)
        return (0);
    count(size);
}
