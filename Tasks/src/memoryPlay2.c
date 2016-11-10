#include <stdio.h>

#define randomAdr 0x0029FF36 //32-bit environment apparently

void findMemMin();
void findMemMax();

int main()
{
    int x;
    
    unsigned volatile char *fileX = randomAdr;
    
    printf("The content of addr %p is %i. \n", fileX, *fileX);
    
    findMemMin();
    
    return 0;
}

void findMemMin(){
    
    unsigned volatile char *addr = randomAdr;
    while(1){
       printf("Current content: %i of current adress: %p\n", *addr, addr);
       addr--;
    }
}

void findMemMax(){
    
    unsigned volatile char *addr = randomAdr;
    while(1){
       printf("Current content: %i of current adress: %p\n", *addr, addr);
       addr++;
    }
}
