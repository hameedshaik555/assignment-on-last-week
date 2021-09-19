#include <stdio.h>
int main() // to set nth bit 
{
    int a=12 , b=24;
     a=a^b; //convert into binary and xor operation is done 
     b=a^b;
     a=a^b;
     printf(" %d\n",a);
     printf("%d",b);
}
