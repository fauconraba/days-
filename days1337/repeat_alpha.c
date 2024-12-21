#include <unistd.h>
int main(int ac, char **av)
 {
    int i;
    int position;
    int Next;

    position=0;
    i=0;
    
    if (ac == 2)
    {
        while(av[1][i])
        {   
        if ( (av[1][i] >= 65 && av[1][i] <=90 ) || (av[1][i] >= 97 && av[1][i] <=120 ))
        {
           if (av[1][i] >= 65 && av[1][i] <=90 )
            { 
                Next=0;
                position=av[1][i]-65;
                while(Next <=position )
                {
                   write(1,&av[1][i],1);
                 Next++;
                }
                i++;
            }
            else 
            { 
                Next=0;
                position=av[1][i]-97;
                while(Next <=position )
                {
                    write(1,&av[1][i],1);
                    Next++;
                }
                i++;
            } 
        }
        else 
        {
            write(1,&av[1][i],1);
            i++;
        }   
         }
        write(1,"\n",1);
    }
    else{
        write(1,"\n",1);
    }
    return 0;
}