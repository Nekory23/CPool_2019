/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_rev_params display all the parameters starting by the last one
*/

void my_putchar(char c);

char my_rev_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    
    while (i < argc) {
        i = i + 1;
    }
    while (i > 0) {
        for (j = 0; argv[i][j] != '\0'; j++) {
            my_putchar (argv[i][j]);
        }
        i = i - 1;
        my_putchar ('\n');
    }
    if (i == 0) {
        for (j = 0; argv[i][j] != '\0'; j++) {
            my_putchar (argv[i][j]);
        }
        my_putchar ('\n');
    }
}

char main(int argc, char **argv)
{
    my_rev_params (argc, argv);
    return (0);
}
