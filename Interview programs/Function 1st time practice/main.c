#include<stdio.h>
void line();
void main(){
   int i,j,limit;
   printf("Enter the limit: ");
   scanf("%d",&limit);
   for(i=1;i<=limit;i++)
   {
      for(j=1;j<=10;j++)
      {
          printf("X ");
      }
      printf("\n");
       line();
       printf("\n");
   }
}
void line()
{
    int a=10,i;
    for(i=1;i<=a;i++){
        printf("- ");
    }
}
