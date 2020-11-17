/*
** EPITECH PROJECT, 2019
** CPool_Day12_2019
** File description:
** task01 : cat
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int ac, char **av)
{
    int fd;
    char buff[30000];
    int rd;

    for (int nbr = 1; nbr != ac; nbr = nbr + 1) {
        fd = open(av[nbr],O_RDONLY);
        if (fd == 1)
            return(84);
        if (fd == -1) {
            write(2, "Error, could not open", 23);
            return(84);
        }
        rd = read(fd, buff, 30000);
        write(1, buff, rd);
        close(fd);
    }
    return(0);
}
