int stage(int size)
{
    int shift;
    int i;

    for (i = 1; i <= size; i++) {
        if (i % 2 != 0)
            print_branch (size);
        else
            print_branch (size - 1);
    }
}
