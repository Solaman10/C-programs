#include <stdio.h>

int main()
{
    struct showRoom
{
    char Tv[20];
    int price;
    int model;
    char color[20];
};
    
    
    struct showRoom kalloorani;
    printf("Enter the Tv name , price, model, color of the Tv: \n");
    scanf("%s %d %d %s",&kalloorani.Tv,&kalloorani.price,&kalloorani.model,&kalloorani.color);
    
    printf("\n\nEnter the Tv compny name: %s\n",kalloorani.Tv);
    printf("Tv's price: %d\n",kalloorani.price);
    printf("Enter the model of Tv: %d\n",kalloorani.model);
    printf("Enter the color of Tv: %s\n",kalloorani.color);
    
    return 0;
}
