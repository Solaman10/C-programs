#include<stdio.h>
int main()
{
    int arr[50],n,i,len,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(len=0;arr[len];len++)
    ans=arr[0]+arr[len];
    printf("%d",ans);
    
}
