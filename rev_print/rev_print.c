#include <unistd.h>

void    ft_putchar(char *str, int i)
{
    i--;
    while(i != 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, &str[i], 1);
    write(1, "\n", 1);
}

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return(i);
}

int main(int ac, char **av)
{
    int i = 0;
    int len = 0;
    char tmp = 0;

    if(ac != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    i = 0;
    i = ft_strlen(av[1]);
    ft_putchar(av[1], i);
}