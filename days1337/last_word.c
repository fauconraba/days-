#include <unistd.h>
/*
write a program that takes a string and displays its first word 
flw by a new line 
parameters should be 1 if else display \n
*/

int main (int argc , char **argv)
{
    int i;
    i=0;
    if (argc ==2)
    {
        while (argv[1][i])
        {
            i++;
        }
        i--;
        /*while(argv[1][i]==' ' || argv[1][i]>=9 && argv[1][i]<=13)
        {
            i--;
        }*/
        while (argv[1][i] !=' ')
        i--;
        while (argv[1][i])
        {
            write(1,&argv[1][i],1);
            i++;
        }    }
    write(1,"\n",1);

}