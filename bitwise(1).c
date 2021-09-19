#include <stdio.h>
int main()
{
    int num =4;
     
    if(num & 1) //logic and operator  //if it true  it set 1
    {
        printf("its least significant bit %d is set(1)",num);
    }  
    else 
    {
        printf("its least   significant bit %d is unset(0)",num); //else 0
        
    }
}
