#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter the digits:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("\nSum of digits:%d",sum);
    return 0;
}
