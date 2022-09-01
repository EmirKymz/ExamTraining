#include <unistd.h>

void    ft_putstr(char *av)
{
    int i;

    i = 0;
    while(av[i])
    {
        write(1, &av[i], 1);
        i++;
    }
}

int ft_strlen(char *av)
{
    int i;

    i = 0;
    while(av[i])
        i++;
    return(i);
}

int main(int ac, char **av)
{
    int i = 0;
    int len;
    char tmp;

    if(ac == 2)
    {
        len = ft_strlen(av[1]);
        len--;
        while(i < len)
        {
            tmp = av[1][i];
            av[1][i] = av[1][len];
            av[1][len] = tmp;
            i++;
            len--; 
        }
        ft_putstr(av[1]);
    }
    write(1, "\n", 1);
}