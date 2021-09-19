#include<stdio.h>  
  
void display(int);  
  
int main()  
{  
    int num;   
    scanf("%d", &num);  
  
    printf("\nNatural Numbers  %d :", num);  
    display(num);  
  
    return 0;  
}  
  
void display(int num)  
{  
    if(num)  
        display(num -1);
    else  
        return;  
  
    printf("\n%d\n", num);  
}  
