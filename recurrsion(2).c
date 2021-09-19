#include <stdio.h>
#include<stdio.h>


void printEvenOdd(int start, int end);



int main()
{
    int start, end;
    
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    printf("Even/odd Numbers from %d to %d are: ", start, end);
    printEvenOdd(start, end); 
    
    return 0;
}

void printEvenOdd(int start, int end)
{
    if(start > end)
        return;
    
    printf("%d, ", start);
    printEvenOdd(start + 2, end);
}
