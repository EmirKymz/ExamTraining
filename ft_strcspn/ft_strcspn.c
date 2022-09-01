/* #include <string.h>
#include <stdio.h>

int main()
{
    const char s1[] = "deneme";
    const char s2[] = "m";
    int a;

    a = strcspn(s1, s2);
    printf("%d", a);
} */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t i2 = 0;

    while(s[i] != '\0')
    {
        i2 = 0;
        while(reject[i2] != '\0')
        {
            if(s[i] == reject[i2])
                return(i);
            i2++;
        }
        i++;
    }
    i = 0;
    while(s[i] != '\0')
        i++;
    return(i);
}