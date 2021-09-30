#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of pyramid: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n+n-1;j++)
        {
            int greater = n+(i-1), lesser = n-(i-1);
            if(j<=greater && j>=lesser)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }  
    return 0;
}
