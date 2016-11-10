#include <stdio.h>
#include <string.h>

void printByte(char byte);
void print2Byte(short bytes);
void print4Byte(int bytes);
int toDecimal(char bits[]);
int pow(int x, int pow);

int main()
{
    //printByte(0xA5);
    //print2Byte(128);
    //print4Byte(109840923);
    //toDecimal("1001");
    
    char input[255];
    while(input[0] != 'q')
    {
        printf("Enter binary number: ");
        scanf("%s",input);
        printf("%i\n", toDecimal(input));
    }
    return 0;
}

void printByte(char byte)
{
    int i;
    for(i = 0; i < 8; i++)
    {
        if(byte & 0x80)
        {
            printf("%i", 1);
        }
        else 
        {
            printf("%i",0);
        }
        byte = byte<<1;
    }
    
    printf("\n");
}

void print2Byte(short bytes)
{
    int i;
    for(i = 0; i < 16; i++)
    {
        if(bytes & 0x8000)
        {
            printf("%i", 1);
        }
        else 
        {
            printf("%i",0);
        }
        bytes = bytes<<1;
    }
    
    printf("\n");
}

void print4Byte(int bytes)
{
    int i;
    for(i = 0; i < 32; i++)
    {
        if(bytes & 0x80000000)
        {
            printf("%i", 1);
        }
        else 
        {
            printf("%i",0);
        }
        bytes = bytes<<1;
    }
    
    printf("\n");
}

int toDecimal(char bits[])
{
    long result = 0;
    int len = strlen(bits);
    int currentBit;
    int i;
    for(i = 0; i < len; i++)
    {
        if(bits[i] == '0') currentBit = 0;
        else currentBit = 1;
        result += currentBit*pow(2,(len-i-1));
    }
    
    return result;
}

int pow(int x, int pow)
{
    int i;
    int x2 = x;
    if(pow == 0) return 1;
    if(pow == 1) return x;
    while(pow-1 > 0)
    {
        x = x*x2;
        pow--;
    }
    
    return x;
}



