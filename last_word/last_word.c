#include <unistd.h>

/* int ft_strlen(char *av)
{
    int i = 0;
    while(av[i] != '\0')
        i++;
    return(i);
}

int main(int ac, char **av)
{
    int len = 0;

    len = ft_strlen(av[1]);
    len--;
    if(ac == 2)
    {
        while(av[1][len] != '\0')
        {
            if(av[1][len] == ' ' || av[1][len] == '\t')
			{
				len++;
				while(av[1][len] != '\0')
				{
					write(1, &av[1][len], 1);
					len++;
				}
			}
			else if((av[1][len] != '\0'))
				len--;
        }
    }
	write(1, "\n", 1);
} */

int main(int ac, char **av)
{
	int i = 0;
	char *tmp;

	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] <= 32 && av[1][i+1] > 32)
				tmp = &av[1][i+1];
			i++;
		}
		i = 0;
		while(tmp && tmp[i] > 32)
		{
			write(1, &tmp[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}