int ft_atoi(const char *str)
{
    int i=0;
    int n=1;
    int res=0;

    while(str[i] <= 32)
        i++;
    if(str[i] == '-')
    {
        n = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * n);
}