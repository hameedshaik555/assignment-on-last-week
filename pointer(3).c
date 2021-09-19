#include<stdio.h>
int main()
{
   int t, r, *p, *q, temp=0;

   printf("Enter two integers to add\n");
   scanf("%d%d", &t, &r);

   p = &t;
   q = &r;
   temp = *p;
   *p = *q;
   *q = temp;


   printf(" %d\n %d",*p,*q);

   return 0;
}
