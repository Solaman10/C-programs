#include <stdio.h>

int main()
{
    struct kalloorani
{
    char Tv[20];
    int price;
    int model;
    char color[20];
};
    
    
    struct kalloorani showRoom;
    printf("Enter the Tv name , price, model, color of the Tv: \n");
    scanf("%s %d %d %s",&showRoom.Tv,&showRoom.price,&showRoom.model,&showRoom.color);
    
    printf("\n\nEnter the Tv compny name: %s\n",showRoom.Tv);
    printf("Tv's price: %d\n",showRoom.price);
    printf("Enter the model of Tv: %d\n",showRoom.model);
    printf("Enter the color of Tv: %s\n",showRoom.color);
    
    return 0;
}
