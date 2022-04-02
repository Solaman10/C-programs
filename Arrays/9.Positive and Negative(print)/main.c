/*
i/p:
6
1 2 -3 4 6 -1

o/p:
Positive nums: 1 2 4 6
Negative nums: -3 -1
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
    
    printf("\nPositive nums: ");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    
    printf("\nNegative nums: ");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}
