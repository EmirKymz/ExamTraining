#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int i2;

    i = 0;
    i2 = 0;
    if(ac == 4 && (av[2][2] != '\0' || av[3][2] != '\0'))
    {
        while(av[1][i])
        {
            if(av[1][i] == av[2][i2])
            {
                av[1][i] = av[3][i2];
                write(1, &av[1][i], 1);
            }
            else
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}