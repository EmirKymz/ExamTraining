#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac <= 1)
        write(1, "\n", 1);
    else
        while(av[ac - 1][i] != 0)
        {
            write(1, &av[ac - 1][i], 1);
            i++;
        }
        return(0);
}