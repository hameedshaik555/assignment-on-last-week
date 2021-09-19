#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &t, &r);

   p = &t;
   q = &r;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
