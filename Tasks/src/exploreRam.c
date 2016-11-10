/*
*   Maximum for this computer is 0060FFFF.
*/

#include <stdio.h>

void printUsed(char *byteAdr);
char* findUsedMemMin(char *byteAdr);
char* findUsedMemMax(char *byteAdr);
void findMemMin(char *byteAdr);
void findMemMax(char *byteAdr);

int main(){
    char x = 'a';
    
    unsigned volatile char *randomByte = &x;
    
    printf("Program initialized with content %i at adress %p.\nSize of pointer is %i. \n\n", *randomByte, randomByte, sizeof(randomByte));
    
    int choice[] = {-1};
    
    while(choice[0] != 0){
        printf("\nChoose an option below: \n");
        printf("(1) Print lowest and highest used memory adress.\n(2) Explore memory downwards until crash.\n(3) Explore memory upwards until crash.\n(0) Quit program.\n\nYour choice: ");
    
        scanf("%i",choice);
    
        if(choice[0] == 1){
            printUsed(randomByte);
        }else if(choice[0] == 2){
            printf("\n Searching downwards. This may take a while...\n");
            findMemMin(randomByte);
        }else if(choice[0] == 3){
            printf("\n Searching upwards. This may take a while...\n");
            findMemMax(randomByte);
        }
    }
                
    
    return 0;
}

void printUsed(char* byteAdr){
    char *minAdr = findUsedMemMin(byteAdr);
    char *maxAdr = findUsedMemMax(byteAdr);
    
    printf("\n\nLowest adress used: %p\nHighest adress used: %p\n********",minAdr,maxAdr);
}

char* findUsedMemMin(char *byteAdr){
    char *current = byteAdr;
    
    while(*current != 0){
        printf("Going down. Current content: %i of current adress: %p\n", *current, current);
        current--;
    }
}

char* findUsedMemMax(char *byteAdr){
    char *current = byteAdr;
    
    while(*current != 0){
        printf("Going up. Current content: %i of current adress: %p\n", *current, current);
        current++;
    }
}


void findMemMin(char *byteAdr){
    
    unsigned volatile char *addr = byteAdr;
    while(1){
       printf("Current content: %i of current adress: %p\n", *addr, addr);
       addr--;
    }
}

void findMemMax(char *byteAdr){
    
    unsigned volatile char *addr = byteAdr;
    while(1){
       printf("Current content: %i of current adress: %p\n", *addr, addr);
       addr++;
    }
}