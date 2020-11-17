/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** task04 my_print_params print the arguments on the command line
*/

void my_putchar(char c);

char my_print_params(int argc, char **argv)
{
    int i;
    int j;

    for (i = 0; i < argc; i++) {
        for (j = 0; argv[i][j] != '\0'; j++) {
            my_putchar (argv[i][j]);
        }
        my_putchar ('\n');
    }
}

char main(int argc, char **argv)
{
    my_print_params (argc, argv);
    return (0);
}
