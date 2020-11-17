int main(void)
{
    int *a, *b;

    *a = 1;
    *b = 2;
//    int b[2] = {2, 4};
    my_swap(&a, &b);
    my_putchar(a);
    my_putchar(b);
}

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

    
