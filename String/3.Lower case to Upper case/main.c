#include<stdio.h>

int lower_case_word(char letter)
{
    return letter>='a' && letter<='z';
}


int main()
{
    char name[]="sola";
    int len=sizeof(name)/sizeof(char)-1;
    
    for(int i=0;i<len;i++)
    {
      if(lower_case_word(name[i]))
       {
          name[i]-=32;
       }
    }
    printf("%s",name);
    
    return 0;
}
