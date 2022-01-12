#include<stdio.h>
#include<string.h>
int main()
{
    char word[50];
    int len,i,j,middle;
    scanf("%s",word);
    
    len=strlen(word)+1;
    middle=len/2;
    
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==j && middle!=i && middle!=j)
            {
                printf("%c ",word[j-1]);
            }
            else if(i+j==len)
            {
                printf("%c ",word[j-1]);
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
