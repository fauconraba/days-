
int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    signe = 1;
    result = 0;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13 )
        i++;
    while ( str[i] && str[i] == '+' || str[i] == '-')
    {
        if (str[i]=='-')
        {
            sign = sign * (-1);  
        }
        i++;
    }
    while (str[i] && str[i] >= 48 && str[i] <=57)
    {
        result = result * 10;
        result =result + str[i] - 48;
        i++;
    }
    result = result * sign;
    return (result);
}