#include <unistd.h>

int main(int ac,char**av)
{
    int i;
    i = 0;
    int last;
    lastc = ac - 1;

    if( ac > 1)
    {
        while( av[last][i] ) 
        {
            write(1,&av[last][i],1);
            i++;

        }
    }
    
    
        write(1,"\n",1);
    return 0;




}