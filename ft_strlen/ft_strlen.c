#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		str[i++];	
	}
	return(i);
}

int main(void)
{
	char *str;
	int c = 0;

	str[0] = 'd';
	str[1] = 'd';
	str[2] = 'd';
	c = ft_strlen(str);
	printf("%d", c);
}