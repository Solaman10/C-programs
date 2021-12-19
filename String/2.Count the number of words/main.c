#include<stdio.h>

int main()
{
    char str[]="anything is nothing,even it has something";
    int strlen=sizeof(str)/sizeof(char)-1;
    int count=1;
    
    for(int i=0;i<strlen;i++)
    {
        while(str[i+1]==' ' || str[i+1]==',')
        {
            i++;
        }
        if(str[i]==' ' || str[i]==',')
        {
            count++;
        }
    }
    printf("%d words are in this sentence",count);
    
    return 0;

}
