#include<stdio.h>
int main()
{
    int arr[50],noOfelmnts,ind,max1=0,max2=0;
    scanf("%d",&noOfelmnts);
    for(ind=0;ind<noOfelmnts;ind++)
    scanf("%d",&arr[ind]);
    
    for(ind=0;arr[ind];ind++)
    {
        if(max1<arr[ind])
        {
            max2=max1;
            max1=arr[ind];
        }
        if(max2<arr[ind] && arr[ind]<max1)
        {
            max2=arr[ind];
        }
    }
    printf("%d",max2);
    return 0;
}
