#include <stdio.h>
int main() // to set nth bit 
{
    int a= 12, newbit; //12=1100 
    int n=1;//nth bit
    newbit  =(1<<n)| a; // 0-31bits  // left shift 00000100 |00001100=1110
    
    printf("its  nth  bit %d is ",newbit);
    
}
