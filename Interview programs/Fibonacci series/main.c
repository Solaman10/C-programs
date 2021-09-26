#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    
    n=n-2;
    printf("%d\t%d",a,b);
    
    while(n>0)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}
