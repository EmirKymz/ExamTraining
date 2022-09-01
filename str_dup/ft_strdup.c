#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    while(str[i] != '\0')
        i++;
    return(i);
}

char *ft_strdup(char *src)
{
    int i = 0;
    int len;
    char *a;

    len = ft_strlen(src);
    a = (char*)malloc(sizeof (char) * len + 1);

    while(src[i] != '\0')
    {
        a[i] = src[i];
        i++;
    }
    a[i] = '\0';
    return(a);
}

int main()
{
    char src[] = "deneme";
    char *a; 
    a = ft_strdup(src);
    printf("%s", a);
    
    
}