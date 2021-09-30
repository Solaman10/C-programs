#include<stdio.h>
int main()
{
    int number,temp,reminder,reversed=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    
    temp=number;
    while(temp!=0)
    {
        reminder = temp%10;
        reversed = reversed * 10+reminder;
        temp     = temp/10;
    }
    printf("Reversed number is: %d",reversed);
    return 0;
}
