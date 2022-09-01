#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac == 4)
    {
        if(av)
        {
            if(av[2][0] == '*')
            {
               i = atoi(av[1]) * atoi(av[3]);
               printf("%d", i);
            }
            else if(av[2][0] == '/')
            {
                i = atoi(av[1]) / atoi(av[3]);
                printf("%d", i);
            }
            else if(av[2][0] == '+')
            {
                i = atoi(av[1]) + atoi(av[3]);
                printf("%d", i);
            }
            else if(av[2][0] == '%')
            {
                i = atoi(av[1]) % atoi(av[3]);
                printf("%d", i);
            }
        }
    }
    printf("\n");
}