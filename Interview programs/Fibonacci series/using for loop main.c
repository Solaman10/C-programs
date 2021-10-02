#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    printf("Enter the number of terms to be printed: ");
    scanf("%d",&n);
    
    printf("1.%d\n2.%d",a,b);
    for(int i=3;i<n;++i)
    {
        c=a+b;
        printf("\n%d.%d",i,c);
        a=b;
        b=c;
    }
    return 0;
}
