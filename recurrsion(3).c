#include <stdio.h>
 
int sum(int n)
{
    if(n==0)
        return n;
    else 
        return (n+sum(n-1));
}
 
int main()
{
    int no;
    printf("Enter how many terms you want to add\n");
    scanf("%d",&no);
 
    printf("%d %d",no,sum(no));
