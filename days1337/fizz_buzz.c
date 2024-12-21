void ft_putnbr(int nb)
{
    char nm;
    if (nb >= 0 && nb <= 9)
    {
        nm = nb +48;
        write(1,&nm,1);
    }
    else
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}

int main()
{
    int i;
    i= 1;
    while(i<=100)
    {
        if ( i % 3 == 0){
            write(1,"fizz",4);
        }
        else if (i % 5 == 0)
        {
            write(1,"buzz",4);
        }
        else if( (i%3==0)&& (i%5==0))
        {
            write(1,"fizzbuzz",8);
        }
        else{
            ft_putnbr(i);
        }
        i++;
        write(1,"\n",1);

    }




}