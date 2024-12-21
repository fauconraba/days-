#include <unistd.h>

int search1(char *str1,char c, int len)
{
    int i = 0;
    
    while(str1[i] && i < len )
        if(str1[i++] == c)
        return 1;
    return  0;
}
 
int main ()
{
    char str[]="zpadinton";
    char strh[]="paqefwtdjetyiytjneytjoeyjnejeyj";
    int i = 0;
    int lenstr =0;
    int j = 0;
        
        while (str[i])
        {
        if (search1(str,str[i],i) == 0)
            write(1,&str[i],1);
            i++;
        }
        while (str[lenstr])
         lenstr++;
        while(strh[j])
        {
            if (search1(str,strh[j],lenstr) == 0 && search1(strh,strh[j],j) == 0 )
                write(1,&strh[j],1);
            j++;
        }
}