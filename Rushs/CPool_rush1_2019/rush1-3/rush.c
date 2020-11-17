/*
** EPITECH PROJECT, 2019
** CPool_rush1_2019
** File description:
** Assignement 1
*/

void line(int x, int y, char a)
{
    int size_x = x - 2;
    int i;

    if (x == 1 || y == 1) {
        a = 'B';
    }
    write(1, &a, 1);
    if (x-2 > 0) {
        for (i = 0; i < size_x; i++) {
            write(1, "B", 1);
        }
    }
    if (x >= 2) {
        write(1, &a, 1);
    }
    write(1, "\n", 1);
}

void column(int x, int y)
{
    int size_y = y - 2;
    int i;
    int j;

    if (y >= 1) {
        for (i = 0; i < size_y; i++) {
            write(1, "B", 1);
            for (j = 0; j < x - 2; j++) {
                write(1, " ", 1);
            }
            if (x >= 2) {
                write(1, "B", 1);
            }
            write(1, "\n", 1);
        }
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    line(x, y, 'A');
    column(x, y);
    if (y > 1) {
        line(x, y, 'C');
    }
}
