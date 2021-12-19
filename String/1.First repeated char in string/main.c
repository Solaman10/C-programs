#include<stdio.h>

int main()
{
    char word[]="Elon Musk";
    int length = sizeof(word)/sizeof(char)-1,i,j;
    char firstRepeatedLetter;
    
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(word[i]==word[j])
            {
                firstRepeatedLetter=word[i];
                break;
            }
        }
        if(firstRepeatedLetter)
        break;
    }
    if(firstRepeatedLetter)
      printf("%c",firstRepeatedLetter);
    else
      printf("There is no repeating character in this sentence");
      
    return 0;
    
}
