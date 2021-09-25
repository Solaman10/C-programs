#include<stdio.h>
int main()
{
    int a[20],size,i,j,k;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<size;i++)
    {
        for(j=j+1;j<size;j++)
        {
            if(a[i]==a[j])
         {
            for(k=j;k<size;k++)
            {
                a[k] = a[k=1];
                
            }
            size--;
            j--;
         }
        }
    }
    printf("After removing duplicate numbers:\t");
    for(i=0;i<size;i++)
    printf("%d",a[i]);
    
    return 0;
    
}
