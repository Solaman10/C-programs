#include<stdio.h>
int main()
{
    int n,c,i;
    printf("Enter the number you want: ");
    scanf("%d",&n);
    
    if(n==2)
    {
        printf("Given number is prime number ");
    }
    else
    {
        for(c=2;c<=n-1;c++)
        {
            if(n%2==0)
            break;
        }
        if(c!=n)
        {
            printf("Not prime number");
        }
        else
        {
            printf("prime number");
        }
    }
    return 0;
}
