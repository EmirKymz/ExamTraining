#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     is_power_of_2(unsigned int n)
{
    int i = 1;
    while(n % 2 == 0)
        n /= 2;
    if(n == 1)
        return(1);
    else
        return(0);
}


/* {
	unsigned long i;

	i = 1;
	while (i < 0xffffffff)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
} */

int	main(int ac, char **av)
{
	if (ac == 2)
    {
        is_power_of_2(atoi(av[1])) ? printf("Yes\n") : printf("No\n");
    }
    return (0);
}