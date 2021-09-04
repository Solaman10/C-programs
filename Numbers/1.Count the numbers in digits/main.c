#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the digits:");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("Total numbers in digits: %d",count);
    return 0;
}
