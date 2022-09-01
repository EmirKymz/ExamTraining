#include <stdio.h>

int ft_strlen(char *str)
{
    int i=0;
    while(str[i] != '\0')
        i++;
    return(i);
}

char *ft_strrev(char *str)
{
    int i = 0;
    int len;
    char tmp;

    len = ft_strlen(str) - 1;
    while(i <= len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return(str);
}

int main()
{
    char str[] = "denem";
    printf("%s", ft_strrev(str));
}