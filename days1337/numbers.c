#include <unistd.h>

int main()
{
    char i;
    char j

    i =48 // 48 en ascii cesr 0 

      while (i < '9')
      {
        j = 48;
        while ( j <'9')
        { 
            write(1,&i,1);
            write(1,&j,1);
            write(1,"\n",1);
            j++;
        }
        i++;
      }
      write(1,"100",3);



}