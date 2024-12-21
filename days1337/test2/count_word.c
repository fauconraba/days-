#include <stdio.h>


int count_word(char *str)
{
    int i=0;
    int count = 0;
    int j = 0;
    
    while(str[i])
    {
        if(str[i] == ' ')
        {
            j = 0;
        }
        else if ( j == 0)
        {
            j =1;
            count++;
        }
        i++;
    }
    return count;
} 

int main()
{
    char src[]=" hello hey l";

printf("%d",count_word(src));
}