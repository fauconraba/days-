#include <unistd.h>

 ft_putnbr ( int nb)
{
    char nnm;

    if( nm == - 123456789)
    {
        write(1,"-123456789",11);
    }
    else if( nb >=0 && nb <=9)
    {
        nm = nb +48;
        write(1,&nm,1);
    }
    else if( nb < 0)
    {
        write(1,"-",1);
        nb = -nb;
        ft_putnbr(nb);
    }
    else{
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }







}