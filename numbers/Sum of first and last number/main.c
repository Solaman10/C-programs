#include<stdio.h>
int main()
{
    int n,r,first,last; // sum;
    printf("Enter the numbers:");
    scanf("%d",&n);
    last=n%10;
    while(n>0) // or while(n!=0)
    {
        r=n%10; 
        n/=10; // or n=n/10;
    }
    first=r;  //sum=first+last;         
    printf("First number:%d",first);
    printf("\nLast number:%d",last);
    printf("\nSum of first and last number:%d",first+last); // printf("\nSum of first and last number:%d",sum);
    return 0;
}
