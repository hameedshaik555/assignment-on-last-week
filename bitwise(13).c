#include<stdio.h>
#define INT_BITS 32
int leftRotate(int n, int d)
{
return (n << d)|(n >> (INT_BITS - d));
}

int rightRotate(int n,  int d)
{

return (n >> d)|(n << (INT_BITS - d));
}
int main()
{
int n ;
int d ;
scanf("%d",&n);
scanf("%d",&d);
printf("Left Rotation of %d by %d is ", n, d);
printf("%d", leftRotate(n, d));
printf("\nRight Rotation of %d by %d is ", n, d);
printf("%d", rightRotate(n, d));
}
