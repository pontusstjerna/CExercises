#include <stdio.h>

#define p printf
#define randomAdr 0x0029FF36 //32-bit environment apparently

int main()
{
    short x = 0x23FF; //Cutting this to char should give 0xFF which is 255.
    unsigned char *adr = &x;
    
    p("Adress of x is: %p and content first byte is: %i\n", adr, *adr);
    p("Size of a pointer is: %i\n", sizeof(adr));
    
    
    
    return 0;
}

