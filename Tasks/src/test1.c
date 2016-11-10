#include <stdio.h>

#define tomrum void 
#define skriv printf

tomrum katt();  
tomrum modAdress();
tomrum sizeofTest();

int main()
{
    //unsigned volatile char* randomMem = 0x1000;
    
    //printf("The adress of %p has content %i. \n", randomMem, *randomMem);
    
    
    
    //katt();
    
    
    char x = 'b';
    printf("This is my number before: %i\n", x);
    modAdress(&x);
    skriv("And this is after: %i\n", x);
    
    sizeofTest();
    
    return 0;
}

tomrum katt()
{
    printf("Katt\n");
}

tomrum modAdress(char *adr)
{
    *adr = 0xD;
}

tomrum sizeofTest()
{
    short x;
    printf("Size of: %i \n", sizeof(x));
}
