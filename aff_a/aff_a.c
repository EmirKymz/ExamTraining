#include <unistd.h>

/* void test(char *av)
{
	int i = 0;
	
	if(av[i] == 'a')
		write(1, "a", 1);
	else if (av[i] != 0)
		i++;
}

int main(int ac, char **av)
{
	char a = 0;
	
	if(ac != 2)
		write(1, "a\n", 2);
	else
		 test(av[1]);
} */


 int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "a\n", 2);
	return (0);
}