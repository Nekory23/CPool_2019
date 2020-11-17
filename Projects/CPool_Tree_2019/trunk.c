void my_putchar(char c);

int trunk(int size)
{
    int trunk_width;
    int line;

    line = 0;
    if (size == 1)
        my_putchar ('|');
    while (line != size) {
        if ( size % 2 == 0) {
            for (trunk_width = 0; trunk_width <= size; trunk_width++) {
                my_putchar ('|');
            }
        }
        else {
            for (trunk_width = 0; trunk_width < size; trunk_width++) {
                my_putchar ('|');
            }
        }
        my_putchar ('\n');
        line = line + 1;
    }
    return (0);
}
