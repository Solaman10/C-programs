#include<stdio.h>
int main()
{
    char str[] = "SOLAIMANI";
    int size = sizeof(str)/sizeof(char) - 1;
    int i = 0, count = 0;
    int j = (size%2 == 0) ? size - 1 : size - 2;
    
    while(count<size)
    {
        if(i<=size)
        {
          printf("%c",str[i]);
          i+=2;
        }  
        else
        {
          printf("%c",str[j]);
          j-=2;
        }
        count++;
        
    }
    printf("\n");
    return 0;
}
