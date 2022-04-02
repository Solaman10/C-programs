#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    
    for(i=0,j=n/2-1;i<j;i++,j--)
    {
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
  
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
