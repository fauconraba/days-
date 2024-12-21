#include <unistd.h>
int search(char *s, char c , int stop)
{
    int i = 0;
    
    while(s[i] && ( i < stop || stop == -1))
         if(s[i++]==c)
             return 1;
return 0;   
}

int main ()
{
    int i =0;
    
    char str[]="padinton";
    char dst[]="paqefwtdjetyiytjneytjoeyjnejeyj";
    
    while(str[i])
    {
        if( search( str,str[i],i)==0 && search(dst,dst[i],-1) == 1 )
        write(1,&str[i],1);
        i++;
    }
}
