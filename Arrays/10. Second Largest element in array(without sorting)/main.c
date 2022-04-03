/*
i/p:
9 
9 1 3 4 5 7 8 6 2 

o/p:
8
*/

#include<stdio.h>
int main()
{
    int a[20],n,i,max,scndMax;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    max=a[0];
    scndMax=0;
    
    for(i=1;i<n;i++)
    {
            if(max<a[i])
            {
                scndMax=max;
                max=a[i];
            }
            if(scndMax<a[i] && max>a[i])
            {
                scndMax=a[i];
            }
    }
    printf("%d",scndMax);
    return 0;
}
