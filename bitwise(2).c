#include <stdio.h>
#define bits sizeof(int)*8 //32bits
int main()
{
    int num =-1, msb;
    msb=1<<(bits-1); ///1<<31 00011111 =32 and 
    if(num & msb) //logic and operator 
    {
        printf("its most significant bit %d is set(1)",num);
    }  
    else 
    {
        printf("its most  significant bit %d is unset(0)",num);
        
    }
}
