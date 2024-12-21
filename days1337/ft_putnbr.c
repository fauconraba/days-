
void ft_putnbr(int nb)
{
    char mn;
    if (nb == -2147483647)
    {
        write(1,"-2147483647",10);
    }
    else if ( nb >= 0 && nb <=9)
    {
        nm = nb + 48;
        write(1,&nm,1);
    }
    else if (nb < 0)
    {
        write(1,"-",1);
        nb = -nb;
        ft_putnbr(nb);
    }
    else
    { 
        ft_putnbr(nb/10);
        ft_putnbr(nb % 10);
    }
}