#include<stdio.h>
int main()
{
    char name[] = "solaimani";
    int length = sizeof(name)/sizeof(name[0]) -1;
    int i,j;
    
    for(i=0;i<length;i++)
    {
        int count = 1;
        for(j=i+1;j<length;j++)
         {
             if(name[i] == name[j] && name[i] != '0')
             {
                count++;
                name[j]='0'; //change the repeated character as 0 
             }
         }
    if(count>0 && name[i] != '0')
    {
    printf(" %c : %d\n",name[i],count);
    }
    }
    return 0;
}
