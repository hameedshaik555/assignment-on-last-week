#include <stdio.h>
int main() // to set nth bit 
{
    int num= 10, toggle ; //12=1100 
    int n=3;//3 rd bit we going to check
    toggle =num ^ 1<<(n-1); //leftshift by 1 
    
    printf("its  toggle  %d is ",toggle);
    
}
