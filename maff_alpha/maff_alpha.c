#include <unistd.h>

int main()
{
    int a = 'a';
    int b = 'B';

    while(b <= 'Z')
    {
        write(1, &a, 1);
        a += 2;
        write(1, &b, 1);
        b += 2;
    }
    write(1, "\n", 1);
}