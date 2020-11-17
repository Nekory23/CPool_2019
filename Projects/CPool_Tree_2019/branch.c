int count(int size)
{
    int branch_nbr = 0;
    int last_line = 1;
    int middle;
    int i;

    for (i = 0; i < size + 3; i++) {
        branch_nbr = branch_nbr + 1;
    }
    for (i = 1; i < branch_nbr; i++) {
        last_line = last_line + 2;
    }
    middle = (last_line / 2) + 1;
    return (branch_nbr, last_line, middle);
}
