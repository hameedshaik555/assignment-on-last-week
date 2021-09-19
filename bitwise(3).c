#include <stdio.h>
int main()
{
    int a= 12, bitstatus;
    int n=1;
    bitstatus =(a>>n)&1; // 0-31bits  // right shift 
    
    printf("its  nth  bit %d is ",bitstatus);
    
}
