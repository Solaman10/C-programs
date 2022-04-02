/*
i/p: 
10
1 2 3 4 5 6 7 8 9 10

o/p:
Odd nums: 1 3 5 7 9
Even nums: 2 4 6 8 10
*/

#include<stdio.h>
int main()
{
    int a[30],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    printf("\nOdd nums: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d ",a[i]);
        }
    }
    
    printf("\nEven nums: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}
