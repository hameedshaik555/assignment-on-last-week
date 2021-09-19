#include <stdio.h>
int main() 
{  
      printf(" size of string ");
      int n;
      scanf("%d",n);
      char s[n] ;
      scanf("%s",s);
      int i=0, count=0;

    for (i = 0; s[i] != '\0'; ++i);
    printf("Length of the string: %d", i);
    return 0;
   
}
