#include<stdio.h>
#include<math.h>
int main()
{
    int num,digits=0,i,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    
    for(i=num;i>0;i=i/10)
    {
        digits++;
    }
    
    temp=num;
    while(num>0)
    {
        sum = sum + pow(num%10,digits);
        num = num/10;
    }
    
    if(temp==sum)
     printf("Yes! the number is armstrong");
    else
     printf("No! the number is not armstrong");
    
    return 0;
}

/*
153
Yes! the number is armstrong

432
NO! the number is not armstrong
*/
