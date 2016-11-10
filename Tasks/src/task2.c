#include <stdio.h>
#include <string.h>

char *rev(char str[]);

int main(){
    while(1)
    {
        char input[255];
    
    printf("Enter a word or 'q' for quit: ");
    scanf("%s", input);
    
    if(input[0] == 'q')
    {
        break;
    }
    
    int len = strlen(input) + 1;
    char word[len];
    
    int i;
    for(i = 0; i < len; i++)
    {
        word[i] = input[i];
    }
    
    char reversed[len];
    char* startChar = rev(word);
    
    for(i = 0; i < len; i++)
    {
        reversed[i] = *startChar;
        startChar++;
    }
    
    printf("\nReversed version of %s is %s.\n\n", input, reversed);
    }
    
    
    return 0;
}

char* rev(char str[])
{
    int len = strlen(str) + 1;
    char reversed[len];
    
    int i;
    int current = len - 2;
    for(i = 0; i < len; i++)
    {
        reversed[i] = str[current];
        printf("%i percent done\n", i*100/len);
        current--;
    }
    
    str = reversed;
    
    return str;
}

