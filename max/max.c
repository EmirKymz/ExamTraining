#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int i;
    int tmp;

    i = 1;
    while(i < len - 1)
    {
        if(tab[i] < tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i+1] = tmp;
            i = -1;
        }
        i++;
    }
    return(tab[0]);
}

int main()
{
    int a = 0;
    int tab[4] = {9, 5, 3, 4};
    int len = 4;
    a = max(tab,len);
    printf("%d", a);
}