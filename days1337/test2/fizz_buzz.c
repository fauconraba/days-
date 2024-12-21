#include <unistd.h>

void ft_putnbr(int nb)
{

}

int main ()
{
    int i =1;
    while( i <= 100)
    {
        if ( i % 3 == 0)
        {
            write(1,"fizz",4);
        }
        else if( i % 5 == 0)
        {
            write(1,"buzz",4);
        }
        else if( i % 3 == 0 && i % 5 == 0)
        {
            write(1,"fizzbuzz",8);
        }
        else
        ft_putnbr(i);
    i++;


    }


}